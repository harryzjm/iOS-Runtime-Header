//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSDisplayLayoutElement.h>

#import <SpringBoardServices/SBSDisplayLayoutElement-Protocol.h>

@class NSString;

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>
{
}

- (id)succinctDescriptionBuilder;
@property(nonatomic) long long layoutRole;
@property(readonly, nonatomic, getter=isSpringBoardElement) _Bool springBoardElement;
- (id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
