/*
 *	autogen/server/zone/objects/tangible/fishing/FishingBaitObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef FISHINGBAITOBJECT_H_
#define FISHINGBAITOBJECT_H_

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
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishingBaitObject : public TangibleObject {
public:
	FishingBaitObject();

	void initializeTransientMembers();

	int getFreshness() const;

	void setFreshness(int value);

	void lessFresh();

	int getUseCount();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	FishingBaitObject(DummyConstructorParameter* param);

	virtual ~FishingBaitObject();

	friend class FishingBaitObjectHelper;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace fishing {

class FishingBaitObjectImplementation : public TangibleObjectImplementation {
protected:
	int freshness;

public:
	FishingBaitObjectImplementation();

	FishingBaitObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	int getFreshness() const;

	void setFreshness(int value);

	void lessFresh();

	int getUseCount();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	WeakReference<FishingBaitObject*> _this;

	operator const FishingBaitObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~FishingBaitObjectImplementation();

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

	friend class FishingBaitObject;
};

class FishingBaitObjectAdapter : public TangibleObjectAdapter {
public:
	FishingBaitObjectAdapter(FishingBaitObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int getFreshness() const;

	void setFreshness(int value);

	void lessFresh();

	int getUseCount();

	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

};

class FishingBaitObjectHelper : public DistributedObjectClassHelper, public Singleton<FishingBaitObjectHelper> {
	static FishingBaitObjectHelper* staticInitializer;

public:
	FishingBaitObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<FishingBaitObjectHelper>;
};

} // namespace fishing
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::fishing;

#endif /*FISHINGBAITOBJECT_H_*/
