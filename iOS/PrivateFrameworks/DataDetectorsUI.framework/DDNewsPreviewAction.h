//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDPreviewAction.h"

__attribute__((visibility("hidden")))
@interface DDNewsPreviewAction : DDPreviewAction
{
}

+ (id)urlForURL:(id)arg1 result:(struct __DDResult *)arg2;
+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
- (id)menuActions;
- (id)commitURL;
- (_Bool)requiresEmbeddingNavigationController;
- (id)createViewController;

@end

