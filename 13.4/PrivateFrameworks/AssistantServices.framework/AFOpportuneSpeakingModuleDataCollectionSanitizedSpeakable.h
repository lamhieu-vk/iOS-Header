//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface AFOpportuneSpeakingModuleDataCollectionSanitizedSpeakable : NSObject
{
    NSString *_identifier;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isOlderThan:(id)arg1;
- (id)initWithDate:(id)arg1;

@end

