//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol AVTSectionItemTransitionModel;

@interface AVTSectionItemTransition
{
    id <AVTSectionItemTransitionModel> _sectionItemTransitionModel;
}

@property(readonly, nonatomic) id <AVTSectionItemTransitionModel> sectionItemTransitionModel; // @synthesize sectionItemTransitionModel=_sectionItemTransitionModel;
- (void).cxx_destruct;
- (id)model;
- (void)performTransition;
- (id)initWithModel:(id)arg1 animated:(_Bool)arg2 setupHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 logger:(id)arg5;

@end
