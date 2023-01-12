//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (BUAdditions)
+ (id)bu_jsRootURL;
+ (id)bu_queryStringForDictionary:(id)arg1 escapedValues:(_Bool)arg2;
+ (id)bu_URLQueryParameterValueAllowedCharacterSet;
+ (id)bu_dictionaryForQueryString:(id)arg1 unescapedValues:(_Bool)arg2;
+ (id)bu_booksRepositoryURL;
+ (id)bu_mediaURL;
+ (id)bu_booksGroupContainerDocumentsURL;
+ (id)bu_booksGroupContainerURL;
+ (id)bu_urlWithAssetID:(id)arg1;
- (_Bool)bu_removeExtendedAttributeNamed:(id)arg1 iCloudSyncable:(_Bool)arg2;
- (_Bool)bu_setExtendedAttributeNamed:(id)arg1 value:(id)arg2 iCloudSyncable:(_Bool)arg3;
- (id)bu_extendedAttributeNamed:(id)arg1 iCloudSyncable:(_Bool)arg2;
- (id)bu_dictionaryForQueryItems;
- (long long)bu_storeURLTypeFromHost:(id)arg1;
- (id)bu_utType;
- (_Bool)bu_isFolder;
- (_Bool)bu_isDirectory;
- (id)bu_isbnForURI;
- (_Bool)bu_isContainedWithinFileURL:(id)arg1;
- (id)bu_identifierFromPermlink;
- (unsigned long long)bu_fileAllocatedSizeWithError:(id *)arg1;
- (void)bu_storeURLForISBNURNWithCompletion:(CDUnknownBlockType)arg1;
- (id)bu_storeURLForISBNURN;
- (id)bu_libraryIDFromURL;
- (id)bu_assetIDFromURL;
- (long long)bu_storeURLType;
@end

