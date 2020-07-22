//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NUIContainerBoxViewDelegate-Protocol.h>
#import <SearchUI/UIWebViewDelegate-Protocol.h>

@class NSString, NUIContainerBoxView;

@interface SearchUIWebCardSectionView <UIWebViewDelegate, NUIContainerBoxViewDelegate>
{
}

- (void)webViewDidFinishLoad:(id)arg1;
- (id)cssColorForColor:(id)arg1;
- (id)replaceCSSColorHexCode:(id)arg1 withColor:(id)arg2 inString:(id)arg3;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (id)setupContentView;
- (id)initWithCardSection:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

// Remaining properties
@property(retain) NUIContainerBoxView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

