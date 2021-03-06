//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface DMFConfigurationOrganization : NSObject <NSSecureCoding>
{
    _Bool _active;
    NSString *_identifier;
    NSString *_displayName;
    NSString *_type;
    NSArray *_registeredConfigurationSources;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *registeredConfigurationSources; // @synthesize registeredConfigurationSources=_registeredConfigurationSources;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;

@end

