//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRContainer;

@interface BRUploadAllFilesOperation
{
    CDUnknownBlockType _uploadAllFilesCompletion;
    BRContainer *_container;
}

@property(copy) CDUnknownBlockType uploadAllFilesCompletion; // @synthesize uploadAllFilesCompletion=_uploadAllFilesCompletion;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithContainer:(id)arg1;
- (id)init;

@end

