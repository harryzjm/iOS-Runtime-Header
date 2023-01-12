//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSURL;

__attribute__((visibility("hidden")))
@interface EKConferenceInvalidationRecord : NSObject
{
    NSURL *_validURL;
    NSMutableSet *_replacementForURLs;
    NSMutableArray *_waitingCompletionHandlers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *waitingCompletionHandlers; // @synthesize waitingCompletionHandlers=_waitingCompletionHandlers;
@property(retain, nonatomic) NSMutableSet *replacementForURLs; // @synthesize replacementForURLs=_replacementForURLs;
@property(retain, nonatomic) NSURL *validURL; // @synthesize validURL=_validURL;
- (void)finishWithURL:(id)arg1 error:(id)arg2;
- (void)generateNewValidURLForOriginalURL:(id)arg1;

@end

