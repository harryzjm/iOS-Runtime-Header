//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKDetailsContactsManager, CKEntity, NSArray;

@protocol CKDetailsContactsManagerDelegate <NSObject>
- (void)contactsManager:(CKDetailsContactsManager *)arg1 didRequestCallTypeForEntity:(CKEntity *)arg2 addresses:(NSArray *)arg3 abLabels:(NSArray *)arg4 faceTimeAudioEnabled:(_Bool)arg5;
- (void)contactsManagerViewModelsDidChange:(CKDetailsContactsManager *)arg1;
@end
