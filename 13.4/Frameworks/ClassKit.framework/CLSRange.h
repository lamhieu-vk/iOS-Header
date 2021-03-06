//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSRelationable-Protocol.h>

@class NSString;

@interface CLSRange : CLSObject <CLSRelationable>
{
    double _start;
    double _end;
}

+ (id)compressOverlappingRanges:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)relations;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
@property(readonly, copy) NSString *description;
- (void)mergeWithRange:(id)arg1;
- (_Bool)overlapsWith:(id)arg1;
@property(readonly, nonatomic) double delta;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithRange:(id)arg1;
- (id)initWithStart:(double)arg1 end:(double)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *parentObjectID; // @dynamic parentObjectID;
@property(readonly) Class superclass;

@end

