//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

__attribute__((visibility("hidden")))
@interface RAPAddressLayoutOptions : NSObject <NSCopying>
{
    _Bool _showUnit;
    _Bool _showBuilding;
    _Bool _showFloor;
}

+ (id)allFieldsDisabledOptions;
+ (id)allFieldsEnabledOptions;
+ (id)clientOverrideOptions;
@property(nonatomic) _Bool showFloor; // @synthesize showFloor=_showFloor;
@property(nonatomic) _Bool showBuilding; // @synthesize showBuilding=_showBuilding;
@property(nonatomic) _Bool showUnit; // @synthesize showUnit=_showUnit;
@property(readonly, nonatomic) long long numberOfEnabledOptions;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

