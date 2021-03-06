//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARDictionaryCoding-Protocol.h>
#import <ARKit/ARMetadataWrapperCoding-Protocol.h>
#import <ARKit/ARMutableSensorData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface ARAccelerometerData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding>
{
    double _timestamp;
    double _temperature;
    CDStruct_31142d93 _acceleration;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
@property(nonatomic) CDStruct_31142d93 acceleration; // @synthesize acceleration=_acceleration;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadataWrapper:(id)arg1;
- (id)encodeToMetadataWrapper;
- (id)initWithDictionary:(id)arg1;
- (id)encodeToDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

