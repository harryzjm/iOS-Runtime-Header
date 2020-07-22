//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

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

