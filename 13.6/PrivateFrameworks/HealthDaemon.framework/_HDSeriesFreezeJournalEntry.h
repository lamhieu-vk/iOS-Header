//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDJournalEntry.h>

@class NSDictionary, NSUUID;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry
{
    NSUUID *_seriesUUID;
    NSDictionary *_metadata;
    Class _seriesClass;
}

+ (_Bool)supportsSecureCoding;
+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class seriesClass; // @synthesize seriesClass=_seriesClass;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSUUID *seriesUUID; // @synthesize seriesUUID=_seriesUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithSeriesUUID:(id)arg1 metadata:(id)arg2 class:(Class)arg3;

@end

