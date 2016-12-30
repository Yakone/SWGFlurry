/*
 *	autogen/server/zone/objects/installation/harvester/HarvesterObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef HARVESTEROBJECT_H_
#define HARVESTEROBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "server/zone/objects/installation/InstallationObject.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace harvester {

class HarvesterObject : public InstallationObject {
public:
	HarvesterObject();

	void setSelfPowered(bool isSelfPowered);

	bool isSelfPowered();

	int getBasePowerRate();

	/**
	 * Reads and sets the template data from a SharedObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { SceneObject members are initialized }
	 * @param templateData templateData points to the LuaObject that is used to initialize SceneObejct members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Fills the radial options, needs to be overriden
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Calls the appropriate UI Listener Function
	 * @pre { this object is locked, object is locked }
	 * @post {this object is locked, object is locked }
	 * @param player CreatureObject using the item
	 * @param value value from packet
	 */
	void synchronizedUIListen(CreatureObject* player, int value);

	/**
	 * Calls the appropriate UI Stop Listener Function
	 * @pre { this object is locked, object is locked }
	 * @post {this object is locked, object is locked }
	 * @param player CreatureObject using the item
	 * @param value value from packet
	 */
	void synchronizedUIStopListen(CreatureObject* player, int value);

	void updateOperators();

	bool isHarvesterObject();

	String getRedeedMessage();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	HarvesterObject(DummyConstructorParameter* param);

	virtual ~HarvesterObject();

	friend class HarvesterObjectHelper;
};

} // namespace harvester
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::harvester;

namespace server {
namespace zone {
namespace objects {
namespace installation {
namespace harvester {

class HarvesterObjectImplementation : public InstallationObjectImplementation {
protected:
	bool selfPowered;

public:
	HarvesterObjectImplementation();

	HarvesterObjectImplementation(DummyConstructorParameter* param);

	void setSelfPowered(bool isSelfPowered);

	bool isSelfPowered();

	virtual int getBasePowerRate();

	/**
	 * Reads and sets the template data from a SharedObjectTemplate LuaObject
	 * @pre { templateData is a valid pointer }
	 * @post { SceneObject members are initialized }
	 * @param templateData templateData points to the LuaObject that is used to initialize SceneObejct members
	 */
	void loadTemplateData(SharedObjectTemplate* templateData);

	/**
	 * Fills the radial options, needs to be overriden
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Calls the appropriate UI Listener Function
	 * @pre { this object is locked, object is locked }
	 * @post {this object is locked, object is locked }
	 * @param player CreatureObject using the item
	 * @param value value from packet
	 */
	void synchronizedUIListen(CreatureObject* player, int value);

	/**
	 * Calls the appropriate UI Stop Listener Function
	 * @pre { this object is locked, object is locked }
	 * @post {this object is locked, object is locked }
	 * @param player CreatureObject using the item
	 * @param value value from packet
	 */
	void synchronizedUIStopListen(CreatureObject* player, int value);

	void updateOperators();

	bool isHarvesterObject();

	String getRedeedMessage();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	WeakReference<HarvesterObject*> _this;

	operator const HarvesterObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~HarvesterObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class HarvesterObject;
};

class HarvesterObjectAdapter : public InstallationObjectAdapter {
public:
	HarvesterObjectAdapter(HarvesterObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setSelfPowered(bool isSelfPowered);

	bool isSelfPowered();

	int getBasePowerRate();

	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	void synchronizedUIListen(CreatureObject* player, int value);

	void synchronizedUIStopListen(CreatureObject* player, int value);

	void updateOperators();

	bool isHarvesterObject();

	String getRedeedMessage();

};

class HarvesterObjectHelper : public DistributedObjectClassHelper, public Singleton<HarvesterObjectHelper> {
	static HarvesterObjectHelper* staticInitializer;

public:
	HarvesterObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<HarvesterObjectHelper>;
};

} // namespace harvester
} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation::harvester;

#endif /*HARVESTEROBJECT_H_*/