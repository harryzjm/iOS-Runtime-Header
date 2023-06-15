//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LSServerOpenStagingIOPersonality : NSObject
{
}

- (optional_78373086)stagingDirectoryKeyForFileHandle:(id)arg1 error:(id *)arg2;
- (optional_78373086)stagingDirectoryKeyForNode:(id)arg1 error:(id *)arg2;
- (optional_c7a1edd4)stagingDirectoryInfoForPersonaUniqueString:(id)arg1 error:(id *)arg2;
- (id)makeStagingDirectoryNodeInContainer:(id)arg1 error:(id *)arg2;
- (id)mainSystemContainerURL;
- (id)mainUserContainerURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

