//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface DVTMountedFileSystem : NSObject
{
    int _deviceNumber;
    NSString *_mountPath;
    NSMapTable *_inodesToVNodes;
}

+ (id)mountedFileSystemWithDeviceNumber:(int)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *mountPath; // @synthesize mountPath=_mountPath;
@property(readonly) int deviceNumber; // @synthesize deviceNumber=_deviceNumber;
- (id)description;
- (void)removeVNode:(id)arg1;
- (void)addVNode:(id)arg1;
- (void)noteFileSystemWasUnmounted;
- (id)vnodeForInodeNumber:(unsigned long long)arg1;
- (id)initWithDeviceNumber:(int)arg1 statfsInfo:(const struct statfs *)arg2;

@end

