//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBAddToPhotosLibraryCommand, _SFPBBeginMapsRoutingCommand, _SFPBCallCommand, _SFPBCopyCommand, _SFPBEmailCommand, _SFPBExpandInlineCommand, _SFPBIndexedUserActivityCommand, _SFPBInvokeSiriCommand, _SFPBLaunchAppCommand, _SFPBOpenAppClipCommand, _SFPBOpenCalculationCommand, _SFPBOpenCoreSpotlightItemCommand, _SFPBOpenFileProviderItemCommand, _SFPBOpenMediaCommand, _SFPBOpenPunchoutCommand, _SFPBOpenWebClipCommand, _SFPBPerformContactActionCommand, _SFPBPerformContactQueryCommand, _SFPBPerformEntityQueryCommand, _SFPBPerformIntentCommand, _SFPBPerformPersonEntityQueryCommand, _SFPBPlayMediaCommand, _SFPBPlayVideoCommand, _SFPBRejectPeopleInPhotoCommand, _SFPBRequestAppClipInstallCommand, _SFPBRequestUserReportCommand, _SFPBRunVoiceShortcutCommand, _SFPBSearchInAppCommand, _SFPBSearchWebCommand, _SFPBShareCommand, _SFPBShowAppStoreSheetCommand, _SFPBShowContactCardCommand, _SFPBShowPhotosOneUpViewCommand, _SFPBShowPurchaseRequestSheetCommand, _SFPBShowSFCardCommand, _SFPBShowScreenTimeRequestSheetCommand, _SFPBSubscribeForUpdatesCommand, _SFPBToggleAudioCommand, _SFPBToggleWatchListStatusCommand, _SFPBUpdateSearchQueryCommand, _SFPBViewEmailCommand;

@protocol _SFPBCommand <NSObject>
@property(readonly, nonatomic) unsigned long long whichValue;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *commandDetail;
@property(retain, nonatomic) _SFPBRejectPeopleInPhotoCommand *rejectPeopleInPhotoCommand;
@property(retain, nonatomic) _SFPBViewEmailCommand *viewEmailCommand;
@property(retain, nonatomic) _SFPBSubscribeForUpdatesCommand *subscribeForUpdatesCommand;
@property(retain, nonatomic) _SFPBExpandInlineCommand *expandInlineCommand;
@property(retain, nonatomic) _SFPBPerformContactActionCommand *performContactActionCommand;
@property(retain, nonatomic) _SFPBAddToPhotosLibraryCommand *addToPhotosLibraryCommand;
@property(retain, nonatomic) _SFPBOpenMediaCommand *openMediaCommand;
@property(retain, nonatomic) _SFPBPlayMediaCommand *playMediaCommand;
@property(retain, nonatomic) _SFPBShowPhotosOneUpViewCommand *showPhotosOneUpViewCommand;
@property(retain, nonatomic) _SFPBToggleWatchListStatusCommand *toggleWatchListStatusCommand;
@property(retain, nonatomic) _SFPBCopyCommand *copyCommand;
@property(retain, nonatomic) _SFPBShareCommand *shareCommand;
@property(retain, nonatomic) _SFPBPerformEntityQueryCommand *performEntityQueryCommand;
@property(retain, nonatomic) _SFPBShowScreenTimeRequestSheetCommand *showScreenTimeRequestSheetCommand;
@property(retain, nonatomic) _SFPBShowPurchaseRequestSheetCommand *showPurchaseRequestSheetCommand;
@property(retain, nonatomic) _SFPBPerformPersonEntityQueryCommand *performPersonEntityQueryCommand;
@property(retain, nonatomic) _SFPBToggleAudioCommand *toggleAudioCommand;
@property(retain, nonatomic) _SFPBBeginMapsRoutingCommand *beginMapsRoutingCommand;
@property(retain, nonatomic) _SFPBEmailCommand *emailCommand;
@property(retain, nonatomic) _SFPBCallCommand *callCommand;
@property(retain, nonatomic) _SFPBPlayVideoCommand *playVideoCommand;
@property(retain, nonatomic) _SFPBOpenCalculationCommand *openCalculationCommand;
@property(retain, nonatomic) _SFPBPerformContactQueryCommand *performContactQueryCommand;
@property(retain, nonatomic) _SFPBInvokeSiriCommand *invokeSiriCommand;
@property(retain, nonatomic) _SFPBSearchWebCommand *searchWebCommand;
@property(retain, nonatomic) _SFPBUpdateSearchQueryCommand *updateSearchQueryCommand;
@property(retain, nonatomic) _SFPBSearchInAppCommand *searchInAppCommand;
@property(retain, nonatomic) _SFPBPerformIntentCommand *performIntentCommand;
@property(retain, nonatomic) _SFPBOpenCoreSpotlightItemCommand *openCoreSpotlightItemCommand;
@property(retain, nonatomic) _SFPBIndexedUserActivityCommand *indexedUserActivityCommand;
@property(retain, nonatomic) _SFPBRunVoiceShortcutCommand *runVoiceShortcutCommand;
@property(retain, nonatomic) _SFPBLaunchAppCommand *launchAppCommand;
@property(retain, nonatomic) _SFPBRequestUserReportCommand *requestUserReportCommand;
@property(retain, nonatomic) _SFPBRequestAppClipInstallCommand *requestAppClipInstallCommand;
@property(retain, nonatomic) _SFPBOpenWebClipCommand *openWebClipCommand;
@property(retain, nonatomic) _SFPBOpenAppClipCommand *openAppClipCommand;
@property(retain, nonatomic) _SFPBOpenFileProviderItemCommand *openFileProviderItemCommand;
@property(retain, nonatomic) _SFPBOpenPunchoutCommand *openPunchoutCommand;
@property(retain, nonatomic) _SFPBShowAppStoreSheetCommand *showAppStoreSheetCommand;
@property(retain, nonatomic) _SFPBShowSFCardCommand *showSFCardCommand;
@property(retain, nonatomic) _SFPBShowContactCardCommand *showContactCardCommand;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

