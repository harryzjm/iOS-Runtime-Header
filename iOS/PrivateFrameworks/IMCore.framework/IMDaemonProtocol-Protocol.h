//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMDaemonAccountsProtocol-Protocol.h>
#import <IMCore/IMDaemonAnyProtocol-Protocol.h>
#import <IMCore/IMDaemonAutomationProtocol-Protocol.h>
#import <IMCore/IMDaemonBuddyListProtocol-Protocol.h>
#import <IMCore/IMDaemonChatFileTransferProtocol-Protocol.h>
#import <IMCore/IMDaemonChatInsertMessageProtocol-Protocol.h>
#import <IMCore/IMDaemonChatMessageHistoryProtocol-Protocol.h>
#import <IMCore/IMDaemonChatModifyReadStateProtocol-Protocol.h>
#import <IMCore/IMDaemonChatProtocol-Protocol.h>
#import <IMCore/IMDaemonChatSendMessageProtocol-Protocol.h>
#import <IMCore/IMDaemonCloudSyncProtocol-Protocol.h>
#import <IMCore/IMDaemonFileProviderProtocol-Protocol.h>
#import <IMCore/IMDaemonFileTransferProtocol-Protocol.h>
#import <IMCore/IMDaemonManageStatusProtocol-Protocol.h>
#import <IMCore/IMDaemonModifyReadStateProtocol-Protocol.h>
#import <IMCore/IMDaemonSyncedSettingsProtocol-Protocol.h>
#import <IMCore/IMDaemonVCACProtocol-Protocol.h>
#import <IMCore/IMDaemonVCInvitationsAVObserverProtocol-Protocol.h>
#import <IMCore/IMDaemonVCProtocol-Protocol.h>
#import <IMCore/NSObject-Protocol.h>

@protocol IMDaemonProtocol <NSObject, IMDaemonAccountsProtocol, IMDaemonAnyProtocol, IMDaemonAutomationProtocol, IMDaemonBuddyListProtocol, IMDaemonChatFileTransferProtocol, IMDaemonChatInsertMessageProtocol, IMDaemonChatMessageHistoryProtocol, IMDaemonChatModifyReadStateProtocol, IMDaemonChatProtocol, IMDaemonChatSendMessageProtocol, IMDaemonCloudSyncProtocol, IMDaemonFileTransferProtocol, IMDaemonFileProviderProtocol, IMDaemonManageStatusProtocol, IMDaemonModifyReadStateProtocol, IMDaemonVCACProtocol, IMDaemonVCInvitationsAVObserverProtocol, IMDaemonVCProtocol, IMDaemonSyncedSettingsProtocol>
- (void)setListenerCapabilities:(unsigned int)arg1;
- (void)setVCCapabilities:(unsigned long long)arg1;
@end

