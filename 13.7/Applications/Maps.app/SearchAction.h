//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsAction.h"

@class SearchFieldItem;

__attribute__((visibility("hidden")))
@interface SearchAction : MapsAction
{
    _Bool _searchAlongRoute;
    SearchFieldItem *_searchItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool searchAlongRoute; // @synthesize searchAlongRoute=_searchAlongRoute;
@property(retain, nonatomic) SearchFieldItem *searchItem; // @synthesize searchItem=_searchItem;
- (_Bool)isCompatibleWithRestorationTask;
- (_Bool)isCompatibleWithNavigation;
- (id)initWithSearchItem:(id)arg1 alongRoute:(_Bool)arg2;

@end

