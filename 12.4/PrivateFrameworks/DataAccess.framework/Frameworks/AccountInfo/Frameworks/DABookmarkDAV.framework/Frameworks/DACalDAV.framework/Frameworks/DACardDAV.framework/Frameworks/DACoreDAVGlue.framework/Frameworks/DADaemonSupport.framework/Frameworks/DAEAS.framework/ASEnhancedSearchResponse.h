//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber;

@interface ASEnhancedSearchResponse : ASItem
{
    int _expectedResultType;
    NSNumber *_status;
    NSMutableArray *_mResults;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mResults; // @synthesize mResults=_mResults;
@property(nonatomic) int expectedResultType; // @synthesize expectedResultType=_expectedResultType;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)addStoreResponse:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *stores;

@end

