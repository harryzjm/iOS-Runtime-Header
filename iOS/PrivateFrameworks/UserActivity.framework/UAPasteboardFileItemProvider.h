//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface UAPasteboardFileItemProvider : NSObject
{
    _Bool _preferFileRep;
    _Bool _isDir;
    NSString *_type;
    NSUUID *_uuid;
    NSURL *_fileURL;
    NSData *_sandboxExtension;
}

+ (_Bool)conformsToProtocol:(id)arg1;
- (void).cxx_destruct;
@property _Bool isDir; // @synthesize isDir=_isDir;
@property(retain) NSData *sandboxExtension; // @synthesize sandboxExtension=_sandboxExtension;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) _Bool preferFileRep; // @synthesize preferFileRep=_preferFileRep;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void)accessFileAtURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getDataFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)getFileName;
- (id)initWithURL:(id)arg1 sandboxExtension:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

