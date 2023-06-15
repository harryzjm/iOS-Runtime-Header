//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class INEditMessageIntent;

@protocol INEditMessageIntentHandling <NSObject>
- (void)handleEditMessage:(INEditMessageIntent *)arg1 completion:(void (^)(INEditMessageIntentResponse *))arg2;

@optional
- (void)resolveEditedContentForEditMessage:(INEditMessageIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)confirmEditMessage:(INEditMessageIntent *)arg1 completion:(void (^)(INEditMessageIntentResponse *))arg2;
@end

