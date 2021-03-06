//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <NSCopying>
{
    SBSApplicationShortcutIcon *_sbsShortcutIcon;
}

+ (id)iconWithCustomImage:(id)arg1 isTemplate:(_Bool)arg2;
+ (id)iconWithCustomImage:(id)arg1;
+ (id)iconWithTemplateImageName:(id)arg1;
+ (id)iconWithSystemImageName:(id)arg1;
+ (id)iconWithType:(long long)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) SBSApplicationShortcutIcon *sbsShortcutIcon; // @synthesize sbsShortcutIcon=_sbsShortcutIcon;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSBSApplicationShortcutIcon:(id)arg1;

@end

