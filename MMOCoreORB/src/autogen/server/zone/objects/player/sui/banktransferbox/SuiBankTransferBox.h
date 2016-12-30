/*
 *	autogen/server/zone/objects/player/sui/banktransferbox/SuiBankTransferBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUIBANKTRANSFERBOX_H_
#define SUIBANKTRANSFERBOX_H_

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
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

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

#include "server/zone/packets/ui/SuiCreatePageMessage.h"

#include "engine/lua/LuaObject.h"

#include "system/io/StringTokenizer.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/SuiBox.h"

#include "system/lang/String.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace banktransferbox {

class SuiBankTransferBox : public SuiBox {
public:
	SuiBankTransferBox(SceneObject* bankObject, CreatureObject* player, unsigned int windowtype);

	void addCash(int cash);

	void addBank(int bank);

	SceneObject* getBank();

	BaseMessage* generateMessage();

	bool isBankTransferBox();

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiBankTransferBox(DummyConstructorParameter* param);

	virtual ~SuiBankTransferBox();

	friend class SuiBankTransferBoxHelper;
};

} // namespace banktransferbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::banktransferbox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace banktransferbox {

class SuiBankTransferBoxImplementation : public SuiBoxImplementation {
protected:
	String lblFrom;

	String lblStartingFrom;

	String lblInputFrom;

	String lblTo;

	String lblStartingTo;

	String lblInputTo;

	String convertRatioFrom;

	String convertRatioTo;

	ManagedReference<SceneObject* > bank;

public:
	SuiBankTransferBoxImplementation(SceneObject* bankObject, CreatureObject* player, unsigned int windowtype);

	SuiBankTransferBoxImplementation(DummyConstructorParameter* param);

	void addCash(int cash);

	void addBank(int bank);

	SceneObject* getBank();

	BaseMessage* generateMessage();

	bool isBankTransferBox();

	WeakReference<SuiBankTransferBox*> _this;

	operator const SuiBankTransferBox*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~SuiBankTransferBoxImplementation();

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

	friend class SuiBankTransferBox;
};

class SuiBankTransferBoxAdapter : public SuiBoxAdapter {
public:
	SuiBankTransferBoxAdapter(SuiBankTransferBox* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void addCash(int cash);

	void addBank(int bank);

	SceneObject* getBank();

	BaseMessage* generateMessage();

	bool isBankTransferBox();

};

class SuiBankTransferBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiBankTransferBoxHelper> {
	static SuiBankTransferBoxHelper* staticInitializer;

public:
	SuiBankTransferBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiBankTransferBoxHelper>;
};

} // namespace banktransferbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::banktransferbox;

#endif /*SUIBANKTRANSFERBOX_H_*/