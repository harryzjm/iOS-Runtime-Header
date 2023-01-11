//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIBarButtonItem.h>

#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>

@class NSString, NSUUID;
@protocol CPSButtonDelegate;

@interface CPSBarButtonItem : UIBarButtonItem <CPSButtonDelegate>
{
    NSUUID *_identifier;
    id <CPSButtonDelegate> _delegate;
}

@property(nonatomic) __weak id <CPSButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)didSelectButton:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithCPBarButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

