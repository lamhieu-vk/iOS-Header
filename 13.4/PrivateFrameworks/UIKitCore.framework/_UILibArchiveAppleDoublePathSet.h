//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UILibArchiveAppleDoublePathSet : NSObject
{
    NSMutableSet *_confirmAppleDoublePaths;
    NSMutableSet *_pathsWithDotUnderscorePrefixedFilenames;
}

+ (_Bool)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)arg1;
- (void).cxx_destruct;
- (_Bool)isConfirmedExactAppleDoubleItem:(id)arg1;
- (id)pathToRealFileIfConfirmedAppleDoubleItem:(id)arg1;
- (void)confirmExactAppleDoubleFilesForItem:(id)arg1;
- (void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)arg1;
- (id)init;

@end

