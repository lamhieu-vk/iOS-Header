//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSelection.h>

@class NSSet;

@interface TSDInfoHyperlinkSelection : TSKSelection
{
    NSSet *_infos;
}

+ (Class)archivedSelectionClass;
+ (id)selectionWithInfos:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *infos; // @synthesize infos=_infos;
@property(readonly, nonatomic) unsigned long long unlockedInfoCount;
@property(readonly, nonatomic) NSSet *unlockedInfos;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned long long infoCount;
- (id)initWithInfos:(id)arg1;

@end

