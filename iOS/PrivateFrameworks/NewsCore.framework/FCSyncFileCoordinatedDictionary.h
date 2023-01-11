//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSURL;

@interface FCSyncFileCoordinatedDictionary : NSObject
{
    NSURL *_fileURL;
    NSSet *_allowedClasses;
}

@property(readonly, copy, nonatomic) NSSet *allowedClasses; // @synthesize allowedClasses=_allowedClasses;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (_Bool)writeWithAccessor:(CDUnknownBlockType)arg1;
- (id)read;
- (id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2;
- (id)init;

@end

