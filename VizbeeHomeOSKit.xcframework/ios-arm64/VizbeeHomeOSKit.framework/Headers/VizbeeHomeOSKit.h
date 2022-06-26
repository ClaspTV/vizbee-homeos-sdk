#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class VZBHomeDevice, VZBHomeFlowOptions, VZBKotlinEnum, VZBHomeFlowState, VZBHomeFlowType, VZBHomeFlowsCommon, UIViewController, VZBHomeDeviceType;

@protocol VZBKotlinComparable, VZBHomeDiscoveryListener, VZBHomeDiscovery;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface VZBMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface VZBMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
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
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface VZBByte : VZBNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface VZBUByte : VZBNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface VZBShort : VZBNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface VZBUShort : VZBNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface VZBInt : VZBNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface VZBUInt : VZBNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface VZBLong : VZBNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface VZBULong : VZBNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface VZBFloat : VZBNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface VZBDouble : VZBNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface VZBBoolean : VZBNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFlowOptions")))
@interface VZBHomeFlowOptions : KotlinBase
- (instancetype)initWithDevice:(VZBHomeDevice * _Nullable)device __attribute__((swift_name("init(device:)"))) __attribute__((objc_designated_initializer));
- (VZBHomeDevice * _Nullable)component1 __attribute__((swift_name("component1()")));
- (VZBHomeFlowOptions *)doCopyDevice:(VZBHomeDevice * _Nullable)device __attribute__((swift_name("doCopy(device:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable context __attribute__((swift_name("context")));
@property (readonly) VZBHomeDevice * _Nullable device __attribute__((swift_name("device")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol VZBKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface VZBKotlinEnum : KotlinBase <VZBKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(VZBKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFlowState")))
@interface VZBHomeFlowState : VZBKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VZBHomeFlowState *default_ __attribute__((swift_name("default_")));
@property (class, readonly) VZBHomeFlowState *selectDevice __attribute__((swift_name("selectDevice")));
- (int32_t)compareToOther:(VZBHomeFlowState *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFlowType")))
@interface VZBHomeFlowType : VZBKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VZBHomeFlowType *cast __attribute__((swift_name("cast")));
- (int32_t)compareToOther:(VZBHomeFlowType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("HomeFlowsCommon")))
@interface VZBHomeFlowsCommon : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)startFlowType:(VZBHomeFlowType *)type state:(VZBHomeFlowState *)state options:(VZBHomeFlowOptions *)options __attribute__((swift_name("startFlow(type:state:options:)")));
@end;

__attribute__((swift_name("HomeFlows")))
@interface VZBHomeFlows : VZBHomeFlowsCommon
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)startFlowViewController:(UIViewController *)viewController type:(VZBHomeFlowType *)type state:(VZBHomeFlowState *)state options:(VZBHomeFlowOptions *)options __attribute__((swift_name("startFlow(viewController:type:state:options:)")));
- (void)startFlowType:(VZBHomeFlowType *)type state:(VZBHomeFlowState *)state options:(VZBHomeFlowOptions *)options __attribute__((swift_name("startFlow(type:state:options:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeDevice")))
@interface VZBHomeDevice : KotlinBase
- (instancetype)initWithDeviceId:(NSString *)deviceId friendlyName:(NSString *)friendlyName modelName:(NSString *)modelName modelNumber:(NSString *)modelNumber manufacturer:(NSString *)manufacturer deviceType:(VZBHomeDeviceType *)deviceType __attribute__((swift_name("init(deviceId:friendlyName:modelName:modelNumber:manufacturer:deviceType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (VZBHomeDeviceType *)component6 __attribute__((swift_name("component6()")));
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
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeDeviceType")))
@interface VZBHomeDeviceType : VZBKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) VZBHomeDeviceType *chromecast __attribute__((swift_name("chromecast")));
@property (class, readonly) VZBHomeDeviceType *roku __attribute__((swift_name("roku")));
@property (class, readonly) VZBHomeDeviceType *fireTv __attribute__((swift_name("fireTv")));
@property (class, readonly) VZBHomeDeviceType *samsungTizen __attribute__((swift_name("samsungTizen")));
@property (class, readonly) VZBHomeDeviceType *lgWebOs __attribute__((swift_name("lgWebOs")));
@property (class, readonly) VZBHomeDeviceType *vizio __attribute__((swift_name("vizio")));
@property (class, readonly) VZBHomeDeviceType *vizioSmartcast __attribute__((swift_name("vizioSmartcast")));
@property (class, readonly) VZBHomeDeviceType *unknown __attribute__((swift_name("unknown")));
- (int32_t)compareToOther:(VZBHomeDeviceType *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeDeviceType.Companion")))
@interface VZBHomeDeviceTypeCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (VZBHomeDeviceType *)ofValueDeviceName:(NSString *)deviceName __attribute__((swift_name("ofValue(deviceName:)")));
@end;

__attribute__((swift_name("HomeDiscovery")))
@protocol VZBHomeDiscovery
@required
- (void)addHomeDiscoveryListenerListener:(id<VZBHomeDiscoveryListener>)listener __attribute__((swift_name("addHomeDiscoveryListener(listener:)")));
- (void)removeHomeDiscoveryListenerListener:(id<VZBHomeDiscoveryListener>)listener __attribute__((swift_name("removeHomeDiscoveryListener(listener:)")));
@property (readonly) NSArray<VZBHomeDevice *> *devices __attribute__((swift_name("devices")));
@end;

__attribute__((swift_name("HomeDiscoveryCommon")))
@interface VZBHomeDiscoveryCommon : KotlinBase <VZBHomeDiscovery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addHomeDiscoveryListenerListener:(id<VZBHomeDiscoveryListener>)listener __attribute__((swift_name("addHomeDiscoveryListener(listener:)")));
- (void)notifyDiscoveryListeners __attribute__((swift_name("notifyDiscoveryListeners()")));
- (void)removeHomeDiscoveryListenerListener:(id<VZBHomeDiscoveryListener>)listener __attribute__((swift_name("removeHomeDiscoveryListener(listener:)")));
- (void)subscribe __attribute__((swift_name("subscribe()")));
- (void)unsubscribe __attribute__((swift_name("unsubscribe()")));
@property (readonly) NSMutableArray<VZBHomeDevice *> *devices __attribute__((swift_name("devices")));
@end;

__attribute__((swift_name("HomeDiscoveryListener")))
@protocol VZBHomeDiscoveryListener
@required
- (void)onDeviceListUpdateDevices:(NSArray<VZBHomeDevice *> *)devices __attribute__((swift_name("onDeviceListUpdate(devices:)")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
