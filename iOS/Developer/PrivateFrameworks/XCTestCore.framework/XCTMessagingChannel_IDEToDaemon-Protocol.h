//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/XCTMessagingRole_AttachmentFinalizing-Protocol.h>
#import <XCTestCore/XCTMessagingRole_AttachmentsDeleting-Protocol.h>
#import <XCTestCore/XCTMessagingRole_ControlSessionInitiation-Protocol.h>
#import <XCTestCore/XCTMessagingRole_DiagnosticsCollection-Protocol.h>
#import <XCTestCore/XCTMessagingRole_RunnerSessionInitiation-Protocol.h>
#import <XCTestCore/XCTMessagingRole_UIRecordingControl-Protocol.h>
#import <XCTestCore/_XCTMessaging_VoidProtocol-Protocol.h>

@protocol XCTMessagingChannel_IDEToDaemon <XCTMessagingRole_RunnerSessionInitiation, XCTMessagingRole_ControlSessionInitiation, XCTMessagingRole_UIRecordingControl, XCTMessagingRole_DiagnosticsCollection, XCTMessagingRole_AttachmentsDeleting, XCTMessagingRole_AttachmentFinalizing, _XCTMessaging_VoidProtocol>

@optional
- (void)__dummy_method_to_work_around_68987191;
@end

