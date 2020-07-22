//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXUIClient;

@interface AXContainerManager : NSObject
{
    AXUIClient *_containerServerClient;
}

+ (id)sharedManager;
@property(retain, nonatomic) AXUIClient *containerServerClient; // @synthesize containerServerClient=_containerServerClient;
- (void).cxx_destruct;
- (void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

