//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFModuleModel;
@protocol WFComponentNavigationContext;

@interface WFModuleHeadingComponent
{
    WFModuleModel *_model;
    id <WFComponentNavigationContext> _navigationContext;
}

+ (id)newWithModel:(id)arg1 navigationContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) WFModuleModel *model; // @synthesize model=_model;
- (void)removeButtonTapped:(id)arg1;
- (void)settingsButtonTapped;
- (void)titleComponentTapped:(id)arg1;

@end
