//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKExtensionProvider : NSObject
{
    _Bool _isBeginningMatching;
    NSString *_extensionPoint;
    NSDictionary *_passKitExtensions;
    id _matchingContext;
    NSMutableArray *_beginMatchingCompletions;
    NSObject<OS_dispatch_source> *_extensionMatchTimer;
    NSObject<OS_dispatch_queue> *_extensionQueue;
}

+ (id)providerForExtensionPoint:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionQueue; // @synthesize extensionQueue=_extensionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *extensionMatchTimer; // @synthesize extensionMatchTimer=_extensionMatchTimer;
@property(retain, nonatomic) NSMutableArray *beginMatchingCompletions; // @synthesize beginMatchingCompletions=_beginMatchingCompletions;
@property(nonatomic) _Bool isBeginningMatching; // @synthesize isBeginningMatching=_isBeginningMatching;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
@property(retain, nonatomic) NSDictionary *passKitExtensions; // @synthesize passKitExtensions=_passKitExtensions;
@property(copy, nonatomic) NSString *extensionPoint; // @synthesize extensionPoint=_extensionPoint;
- (id)_extensionMatchingEntitlementAttribute;
- (id)_extensionsForContainingApplicationIdentifiers:(id)arg1;
- (void)_invokeAndClearBeginMatchingCompletionsWithError:(id)arg1;
- (void)_endMatchingExtensions;
- (void)_beginMatchingExtensionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishedMatchingExtensions:(id)arg1 withError:(id)arg2;
- (void)beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)extensionsWithContainingApplicationIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extensionsWithContainingAppBundleIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extensionWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithExtensionPoint:(id)arg1;
- (id)init;

@end
