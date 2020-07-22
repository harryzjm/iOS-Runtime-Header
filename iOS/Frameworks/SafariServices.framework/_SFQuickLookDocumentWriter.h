//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _SFQuickLookDocument;
@protocol OS_dispatch_queue;

@interface _SFQuickLookDocumentWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_filePathAccessedOnDispatchQueue;
    _Bool _hasFinishedWriting;
    _SFQuickLookDocument *_quickLookDocument;
}

@property(readonly, nonatomic) _Bool hasFinishedWriting; // @synthesize hasFinishedWriting=_hasFinishedWriting;
@property(readonly, nonatomic) _SFQuickLookDocument *quickLookDocument; // @synthesize quickLookDocument=_quickLookDocument;
- (void).cxx_destruct;
- (void)writeDataAndClose:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFileName:(id)arg1 uti:(id)arg2;
@property(copy, nonatomic) NSString *filePathAccessedOnDispatchQueue;

@end

