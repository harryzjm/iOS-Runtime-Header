//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface BRFileProvidingOperation
{
    NSURL *_url;
    unsigned long long _readingOptions;
    CDUnknownBlockType _fileProvidingCompletion;
    _Bool _wantsCurrentVersion;
}

@property(nonatomic) _Bool wantsCurrentVersion; // @synthesize wantsCurrentVersion=_wantsCurrentVersion;
@property(copy, nonatomic) CDUnknownBlockType fileProvidingCompletion; // @synthesize fileProvidingCompletion=_fileProvidingCompletion;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2;

@end

