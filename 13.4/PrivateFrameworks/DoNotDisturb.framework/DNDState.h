//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSArray;

@interface DNDState : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _suppressionState;
    NSArray *_activeModeAssertionMetadata;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *activeModeAssertionMetadata; // @synthesize activeModeAssertionMetadata=_activeModeAssertionMetadata;
@property(readonly, nonatomic) unsigned long long suppressionState; // @synthesize suppressionState=_suppressionState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @dynamic active;
- (id)initWithSuppressionState:(unsigned long long)arg1 activeModeAssertionMetadata:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *activeModeIdentifiers; // @dynamic activeModeIdentifiers;
@property(readonly, nonatomic) _Bool willSuppressInterruptions; // @dynamic willSuppressInterruptions;

@end

