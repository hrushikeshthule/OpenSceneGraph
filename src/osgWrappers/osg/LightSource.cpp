// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/BoundingSphere>
#include <osg/CopyOp>
#include <osg/Light>
#include <osg/LightSource>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/StateAttribute>
#include <osg/StateSet>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::LightSource::ReferenceFrame)
	I_EnumLabel(osg::LightSource::RELATIVE_RF);
	I_EnumLabel(osg::LightSource::ABSOLUTE_RF);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::LightSource)
	I_BaseType(osg::Group);
	I_Constructor0();
	I_ConstructorWithDefaults2(IN, const osg::LightSource &, ls, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY);
	I_Method0(osg::Object *, cloneType);
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop);
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj);
	I_Method0(const char *, className);
	I_Method0(const char *, libraryName);
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv);
	I_Method1(void, setReferenceFrame, IN, osg::LightSource::ReferenceFrame, rf);
	I_Method0(osg::LightSource::ReferenceFrame, getReferenceFrame);
	I_Method1(void, setLight, IN, osg::Light *, light);
	I_Method0(osg::Light *, getLight);
	I_Method0(const osg::Light *, getLight);
	I_Method2(void, setStateSetModes, IN, osg::StateSet &, x, IN, osg::StateAttribute::GLModeValue, x);
	I_MethodWithDefaults1(void, setLocalStateSetModes, IN, osg::StateAttribute::GLModeValue, value, osg::StateAttribute::ON);
	I_Method0(osg::BoundingSphere, computeBound);
	I_Property(osg::Light *, Light);
	I_WriteOnlyProperty(osg::StateAttribute::GLModeValue, LocalStateSetModes);
	I_Property(osg::LightSource::ReferenceFrame, ReferenceFrame);
END_REFLECTOR

