//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface FPTransformOperation
{
    NSArray *_items;
    CDUnknownBlockType _transformCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType transformCompletionBlock; // @synthesize transformCompletionBlock=_transformCompletionBlock;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)fp_prettyDescription;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (id)finalItemsForStitcherForResult:(id)arg1;
- (void)presendNotifications;
- (void)actionMain;
- (id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2;

@end
