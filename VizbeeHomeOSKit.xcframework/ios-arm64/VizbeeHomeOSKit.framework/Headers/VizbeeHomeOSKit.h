#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class VZBHomeDeviceType, VZBHomeDevice, VZBKotlinEnumCompanion, VZBKotlinEnum<E>, VZBHomeDeviceTypeCompanion, VZBKotlinArray<T>, VZBHomeFlowOptions, VZBHomeFlowState, VZBHomeFlowType, VZBHomeFlowsCommon, UIViewController;

@protocol VZBKotlinComparable, VZBHomeDiscoveryListener, VZBHomeDiscovery, VZBKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface VZBBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface VZBBase (VZBBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface VZBMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface VZBMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorVZBKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface VZBNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface VZBByte : VZBNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface VZBUByte : VZBNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface VZBShort : VZBNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface VZBUShort : VZBNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface VZBInt : VZBNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface VZBUInt : VZBNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface VZBLong : VZBNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface VZBULong : VZBNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface VZBFloat : VZBNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface VZBDouble : VZBNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface VZBBoolean : VZBNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeDevice")))
@interface VZBHomeDevice : VZBBase
- (instancetype)initWithDeviceId:(NSString *)deviceId friendlyName:(NSString *)friendlyName modelName:(NSString *)modelName modelNumber:(NSString *)modelNumber manufacturer:(NSString *)manufacturer deviceType:(VZBHomeDeviceType *)deviceType __attribute__((swift_name("init(deviceId:friendlyName:modelName:modelNumber:manufacturer:deviceType:)"))) __attribute__((objc_designated_initializer));
- (VZBHomeDevice *)doCopyDeviceId:(NSString *)deviceId friendlyName:(NSString *)friendlyName modelName:(NSString *)modelName modelNumber:(NSString *)modelNumber manufacturer:(NSString *)manufacturer deviceType:(VZBHomeDeviceType *)deviceType __attribute__((swift_name("doCopy(deviceId:friendlyName:modelName:modelNumber:manufacturer:deviceType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *deviceId __attribute__((swift_name("deviceId")));
@property (readonly) VZBHomeDeviceType *deviceType __attribute__((swift_name("deviceType")));
@property (readonly) NSString *friendlyName __attribute__((swift_name("friendlyName")));
@property (readonly) NSString *manufacturer __attribute__((swift_name("manufacturer")));
@property (readonly) NSString *modelName __attribute__((swift_name("modelName")));
@property (readonly) NSString *modelNumber __attribute__((swift_name("modelNumber")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol VZBKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface VZBKotlinEnum<E> : VZBBase <VZBKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) VZBKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeDeviceType")))
@interface VZBHomeDeviceType : VZBKotlinEnum<VZBHomeDeviceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) VZBHomeDeviceTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) VZBHomeDeviceType *chromecast __attribute__((swift_name("chromecast")));
@property (class, readonly) VZBHomeDeviceType *roku __attribute__((swift_name("roku")));
@property (class, readonly) VZBHomeDeviceType *fireTv __attribute__((swift_name("fireTv")));
@property (class, readonly) VZBHomeDeviceType *samsungTizen __attribute__((swift_name("samsungTizen")));
@property (class, readonly) VZBHomeDeviceType *lgWebOs __attribute__((swift_name("lgWebOs")));
@property (class, readonly) VZBHomeDeviceType *vizio __attribute__((swift_name("vizio")));
@property (class, readonly) VZBHomeDeviceType *vizioSmartcast __attribute__((swift_name("vizioSmartcast")));
@property (class, readonly) VZBHomeDeviceType *unknown __attribute__((swift_name("unknown")));
+ (VZBKotlinArray<VZBHomeDeviceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VZBHomeDeviceType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeDeviceType.Companion")))
@interface VZBHomeDeviceTypeCompanion : VZBBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VZBHomeDeviceTypeCompanion *shared __attribute__((swift_name("shared")));
- (VZBHomeDeviceType *)ofValueDeviceName:(NSString *)deviceName __attribute__((swift_name("ofValue(deviceName:)")));
@end

__attribute__((swift_name("HomeDiscovery")))
@protocol VZBHomeDiscovery
@required
- (void)addHomeDiscoveryListenerListener:(id<VZBHomeDiscoveryListener>)listener __attribute__((swift_name("addHomeDiscoveryListener(listener:)")));
- (void)removeHomeDiscoveryListenerListener:(id<VZBHomeDiscoveryListener>)listener __attribute__((swift_name("removeHomeDiscoveryListener(listener:)")));
@property (readonly) NSArray<VZBHomeDevice *> *devices __attribute__((swift_name("devices")));
@end

__attribute__((swift_name("HomeDiscoveryCommon")))
@interface VZBHomeDiscoveryCommon : VZBBase <VZBHomeDiscovery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addHomeDiscoveryListenerListener:(id<VZBHomeDiscoveryListener>)listener __attribute__((swift_name("addHomeDiscoveryListener(listener:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyDiscoveryListeners __attribute__((swift_name("notifyDiscoveryListeners()")));
- (void)removeHomeDiscoveryListenerListener:(id<VZBHomeDiscoveryListener>)listener __attribute__((swift_name("removeHomeDiscoveryListener(listener:)")));
- (void)subscribe __attribute__((swift_name("subscribe()")));
- (void)unsubscribe __attribute__((swift_name("unsubscribe()")));
@property (readonly) NSMutableArray<VZBHomeDevice *> *devices __attribute__((swift_name("devices")));
@end

__attribute__((swift_name("HomeDiscoveryListener")))
@protocol VZBHomeDiscoveryListener
@required
- (void)onDeviceListUpdateDevices:(NSArray<VZBHomeDevice *> *)devices __attribute__((swift_name("onDeviceListUpdate(devices:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFlowOptions")))
@interface VZBHomeFlowOptions : VZBBase
- (instancetype)initWithDevice:(VZBHomeDevice * _Nullable)device __attribute__((swift_name("init(device:)"))) __attribute__((objc_designated_initializer));
- (VZBHomeFlowOptions *)doCopyDevice:(VZBHomeDevice * _Nullable)device __attribute__((swift_name("doCopy(device:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable context __attribute__((swift_name("context")));
@property (readonly) VZBHomeDevice * _Nullable device __attribute__((swift_name("device")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFlowState")))
@interface VZBHomeFlowState : VZBKotlinEnum<VZBHomeFlowState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VZBHomeFlowState *default_ __attribute__((swift_name("default_")));
@property (class, readonly) VZBHomeFlowState *selectDevice __attribute__((swift_name("selectDevice")));
+ (VZBKotlinArray<VZBHomeFlowState *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VZBHomeFlowState *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFlowType")))
@interface VZBHomeFlowType : VZBKotlinEnum<VZBHomeFlowType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VZBHomeFlowType *cast __attribute__((swift_name("cast")));
+ (VZBKotlinArray<VZBHomeFlowType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<VZBHomeFlowType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("HomeFlowsCommon")))
@interface VZBHomeFlowsCommon : VZBBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)startFlowType:(VZBHomeFlowType *)type state:(VZBHomeFlowState *)state options:(VZBHomeFlowOptions *)options __attribute__((swift_name("startFlow(type:state:options:)")));
@end

__attribute__((swift_name("HomeFlows")))
@interface VZBHomeFlows : VZBHomeFlowsCommon
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)startFlowType:(VZBHomeFlowType *)type state:(VZBHomeFlowState *)state options:(VZBHomeFlowOptions *)options __attribute__((swift_name("startFlow(type:state:options:)")));
- (void)startFlowViewController:(UIViewController *)viewController type:(VZBHomeFlowType *)type state:(VZBHomeFlowState *)state options:(VZBHomeFlowOptions *)options __attribute__((swift_name("startFlow(viewController:type:state:options:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface VZBKotlinEnumCompanion : VZBBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) VZBKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface VZBKotlinArray<T> : VZBBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(VZBInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<VZBKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol VZBKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
