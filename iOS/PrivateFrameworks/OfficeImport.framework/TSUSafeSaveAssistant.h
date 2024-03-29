//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSUSafeSaveAssistant : NSObject
{
    NSURL *_saveURL;
    OITSUTemporaryDirectory *_temporaryDirectory;
    NSURL *_writeURL;
}

+ (_Bool)finishWritingToURL:(id)arg1 byMovingOrCopyingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;
+ (void)writeAttributes:(id)arg1 toURL:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *writeURL; // @synthesize writeURL=_writeURL;
- (_Bool)endSaveWithSuccess:(_Bool)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id *)arg4;
- (_Bool)endSaveWithSuccess:(_Bool)arg1 addingAttributes:(id)arg2 error:(id *)arg3;
- (id)initForSavingToURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end

