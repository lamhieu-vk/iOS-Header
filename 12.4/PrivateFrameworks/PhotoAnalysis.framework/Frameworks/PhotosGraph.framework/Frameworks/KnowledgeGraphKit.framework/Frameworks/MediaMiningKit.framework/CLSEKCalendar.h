//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <NSCoding>
{
    _Bool _hasSharees;
    NSSet *_shareesAndOwner;
    NSString *_calendarIdentifier;
}

@property(readonly) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly) NSSet *shareesAndOwner; // @synthesize shareesAndOwner=_shareesAndOwner;
@property(readonly) _Bool hasSharees; // @synthesize hasSharees=_hasSharees;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKCalendar:(id)arg1;

@end

