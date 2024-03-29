//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SafariNSFileManagerExtras)
- (id)safari_createTemporaryDirectoryAppropriateForURL:(id)arg1 error:(id *)arg2;
- (void)safari_removeContentsOfDirectory:(id)arg1;
- (_Bool)safari_removeDirectoryIfEmpty:(id)arg1;
- (id)safari_frameworksDirectoryURLs;
- (id)safari_pathWithUniqueFilenameForPath:(id)arg1;
- (_Bool)_safari_removeFileAtURL:(id)arg1 onlyIfFileExists:(_Bool)arg2 error:(id *)arg3;
- (_Bool)safari_removeFileOnlyAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)safari_removeFileAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)safari_moveDownloadedFileAtURL:(id)arg1 toURL:(id)arg2;
- (id)safari_createTemporaryDirectoryWithTemplate:(id)arg1;
- (id)safari_autoFillQuirksDownloadDirectoryURL;
- (id)safari_productionSafariSettingsDirectory;
- (id)safari_nonContaineredSettingsDirectoryURL;
- (id)safari_profileDirectoryURLWithID:(id)arg1;
- (id)safari_profilesDirectoryURL;
- (id)safari_settingsDirectoryURL;
- (id)safari_settingsDirectoryForHomeDirectory:(id)arg1;
- (id)safari_webExtensionsSettingsDirectoryURL;
- (id)safari_settingsDirectoryForLibraryDirectory:(id)arg1;
- (id)safari_safariLibraryDirectory;
- (id)_safari_libraryDirectoryForHomeDirectory:(id)arg1;
- (_Bool)safari_currentProcessIsContainerized;
- (id)safari_mobileSafariContainerDirectoryURL;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned long long)arg2;
- (id)safari_ensureDirectoryExists:(id)arg1;
- (void)_safari_getMobileSafariContainerDirectoryURL:(id *)arg1 isContainerized:(_Bool *)arg2;
- (id)safari_startPageBackgroundImageFolderURL;
- (id)safari_startPageBackgroundImageFileURLForIdentifier:(id)arg1;
- (id)safari_startPageBackgroundImageFileURL;
@end

