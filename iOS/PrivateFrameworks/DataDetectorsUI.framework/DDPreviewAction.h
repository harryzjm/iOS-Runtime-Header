//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DDPreviewAction
{
}

+ (id)previewActionForURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)platterSubtitle;
- (id)platterTitle;
- (void)setPreviewMode:(_Bool)arg1;
- (_Bool)requiresEmbeddingNavigationController;
- (_Bool)wantsSeamlessCommit;
- (id)commitURL;
- (id)viewController;
- (id)createViewController;
- (void)dealloc;

@end

