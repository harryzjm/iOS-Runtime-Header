//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@protocol USUIInterventionContainer;

@protocol USUIInterventionViewControllerDelegate <NSObject>
- (void)didRejectForInterventionViewController:(id <USUIInterventionContainer>)arg1;
- (void)didConfirmForInterventionViewController:(id <USUIInterventionContainer>)arg1;

@optional
- (void)didRequestMoreHelpForInterventionViewController:(id <USUIInterventionContainer>)arg1;
- (void)didContactSomeoneForInterventionViewController:(id <USUIInterventionContainer>)arg1;
@end

