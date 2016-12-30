/*
 *	autogen/server/zone/objects/tangible/terminal/characterbuilder/CharacterBuilderTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "CharacterBuilderTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/Zone.h"

/*
 *	CharacterBuilderTerminalStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_SENDINITIALCHOICES__CREATUREOBJECT_,RPC_GIVELANGUAGES__CREATUREOBJECT_,RPC_ENHANCECHARACTER__CREATUREOBJECT_,RPC_GRANTGLOWYBADGES__CREATUREOBJECT_};

CharacterBuilderTerminal::CharacterBuilderTerminal() : Terminal(DummyConstructorParameter::instance()) {
	CharacterBuilderTerminalImplementation* _implementation = new CharacterBuilderTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("CharacterBuilderTerminal");
}

CharacterBuilderTerminal::CharacterBuilderTerminal(DummyConstructorParameter* param) : Terminal(param) {
	_setClassName("CharacterBuilderTerminal");
}

CharacterBuilderTerminal::~CharacterBuilderTerminal() {
}



void CharacterBuilderTerminal::loadTemplateData(SharedObjectTemplate* templateData) {
	CharacterBuilderTerminalImplementation* _implementation = static_cast<CharacterBuilderTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->loadTemplateData(templateData);
	}
}

void CharacterBuilderTerminal::initializeTransientMembers() {
	CharacterBuilderTerminalImplementation* _implementation = static_cast<CharacterBuilderTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

int CharacterBuilderTerminal::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	CharacterBuilderTerminalImplementation* _implementation = static_cast<CharacterBuilderTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else {
		return _implementation->handleObjectMenuSelect(player, selectedID);
	}
}

void CharacterBuilderTerminal::sendInitialChoices(CreatureObject* player) {
	CharacterBuilderTerminalImplementation* _implementation = static_cast<CharacterBuilderTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDINITIALCHOICES__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->sendInitialChoices(player);
	}
}

void CharacterBuilderTerminal::giveLanguages(CreatureObject* player) {
	CharacterBuilderTerminalImplementation* _implementation = static_cast<CharacterBuilderTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GIVELANGUAGES__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->giveLanguages(player);
	}
}

void CharacterBuilderTerminal::enhanceCharacter(CreatureObject* player) {
	CharacterBuilderTerminalImplementation* _implementation = static_cast<CharacterBuilderTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ENHANCECHARACTER__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->enhanceCharacter(player);
	}
}

void CharacterBuilderTerminal::grantGlowyBadges(CreatureObject* player) {
	CharacterBuilderTerminalImplementation* _implementation = static_cast<CharacterBuilderTerminalImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GRANTGLOWYBADGES__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else {
		_implementation->grantGlowyBadges(player);
	}
}

DistributedObjectServant* CharacterBuilderTerminal::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* CharacterBuilderTerminal::_getImplementationForRead() const {
	return _impl;
}

void CharacterBuilderTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CharacterBuilderTerminalImplementation
 */

CharacterBuilderTerminalImplementation::CharacterBuilderTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


CharacterBuilderTerminalImplementation::~CharacterBuilderTerminalImplementation() {
}


void CharacterBuilderTerminalImplementation::finalize() {
}

void CharacterBuilderTerminalImplementation::_initializeImplementation() {
	_setClassHelper(CharacterBuilderTerminalHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CharacterBuilderTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<CharacterBuilderTerminal*>(stub);
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* CharacterBuilderTerminalImplementation::_getStub() {
	return _this.get();
}

CharacterBuilderTerminalImplementation::operator const CharacterBuilderTerminal*() {
	return _this.get();
}

void CharacterBuilderTerminalImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void CharacterBuilderTerminalImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void CharacterBuilderTerminalImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void CharacterBuilderTerminalImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void CharacterBuilderTerminalImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void CharacterBuilderTerminalImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void CharacterBuilderTerminalImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void CharacterBuilderTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("CharacterBuilderTerminal");

}

void CharacterBuilderTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(CharacterBuilderTerminalImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CharacterBuilderTerminalImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (TerminalImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	}

	return false;
}

void CharacterBuilderTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CharacterBuilderTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CharacterBuilderTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = TerminalImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;

	return _count + 0;
}

CharacterBuilderTerminalImplementation::CharacterBuilderTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/characterbuilder/CharacterBuilderTerminal.idl():  		Logger.setLoggingName("CharacterBuilderTerminal");
	Logger::setLoggingName("CharacterBuilderTerminal");
}

/*
 *	CharacterBuilderTerminalAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


CharacterBuilderTerminalAdapter::CharacterBuilderTerminalAdapter(CharacterBuilderTerminal* obj) : TerminalAdapter(obj) {
}

void CharacterBuilderTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			byte selectedID = inv->getByteParameter();
			
			int _m_res = handleObjectMenuSelect(player, selectedID);
			resp->insertSignedInt(_m_res);
		}
		break;
	case RPC_SENDINITIALCHOICES__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			sendInitialChoices(player);
			
		}
		break;
	case RPC_GIVELANGUAGES__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			giveLanguages(player);
			
		}
		break;
	case RPC_ENHANCECHARACTER__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			enhanceCharacter(player);
			
		}
		break;
	case RPC_GRANTGLOWYBADGES__CREATUREOBJECT_:
		{
			CreatureObject* player = static_cast<CreatureObject*>(inv->getObjectParameter());
			
			grantGlowyBadges(player);
			
		}
		break;
	default:
		TerminalAdapter::invokeMethod(methid, inv);
	}
}

void CharacterBuilderTerminalAdapter::initializeTransientMembers() {
	(static_cast<CharacterBuilderTerminal*>(stub))->initializeTransientMembers();
}

int CharacterBuilderTerminalAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<CharacterBuilderTerminal*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void CharacterBuilderTerminalAdapter::sendInitialChoices(CreatureObject* player) {
	(static_cast<CharacterBuilderTerminal*>(stub))->sendInitialChoices(player);
}

void CharacterBuilderTerminalAdapter::giveLanguages(CreatureObject* player) {
	(static_cast<CharacterBuilderTerminal*>(stub))->giveLanguages(player);
}

void CharacterBuilderTerminalAdapter::enhanceCharacter(CreatureObject* player) {
	(static_cast<CharacterBuilderTerminal*>(stub))->enhanceCharacter(player);
}

void CharacterBuilderTerminalAdapter::grantGlowyBadges(CreatureObject* player) {
	(static_cast<CharacterBuilderTerminal*>(stub))->grantGlowyBadges(player);
}

/*
 *	CharacterBuilderTerminalHelper
 */

CharacterBuilderTerminalHelper* CharacterBuilderTerminalHelper::staticInitializer = CharacterBuilderTerminalHelper::instance();

CharacterBuilderTerminalHelper::CharacterBuilderTerminalHelper() {
	className = "CharacterBuilderTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void CharacterBuilderTerminalHelper::finalizeHelper() {
	CharacterBuilderTerminalHelper::finalize();
}

DistributedObject* CharacterBuilderTerminalHelper::instantiateObject() {
	return new CharacterBuilderTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* CharacterBuilderTerminalHelper::instantiateServant() {
	return new CharacterBuilderTerminalImplementation();
}

DistributedObjectAdapter* CharacterBuilderTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CharacterBuilderTerminalAdapter(static_cast<CharacterBuilderTerminal*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
