//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TranslationUI/NSFilePresenter-Protocol.h>

@class MISSING_TYPE, NSOperationQueue, NSURL;

@interface _TtC13TranslationUI18SharedTranslations : NSObject <NSFilePresenter>
{
    MISSING_TYPE *presentedItemOperationQueue;
    MISSING_TYPE *presentedItemURL;
    MISSING_TYPE *_translations;
}

- (void).cxx_destruct;
- (id)init;
- (void)presentedItemDidChange;
@property(nonatomic, copy) NSURL *presentedItemURL;
@property(nonatomic, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue;

@end
