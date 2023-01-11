//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCMMInvitationParticipant-Protocol.h>

@class NSString;

@interface _PXMomentShareMockParticipant : NSObject <PXCMMInvitationParticipant>
{
    NSString *emailAddressString;
    NSString *phoneNumberString;
    NSString *_localizedName;
    NSString *_firstName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString;
@property(readonly, nonatomic) NSString *emailAddressString; // @synthesize emailAddressString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
