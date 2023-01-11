//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface BOXItemShareRequest
{
    _Bool _removeExpirationDate;
    _Bool _canDownload;
    _Bool _canPreview;
    struct NSString *_accessLevel;
    NSDate *_expirationDate;
    NSString *_matchingEtag;
}

@property(retain, nonatomic) NSString *matchingEtag; // @synthesize matchingEtag=_matchingEtag;
@property(nonatomic) _Bool canPreview; // @synthesize canPreview=_canPreview;
@property(nonatomic) _Bool canDownload; // @synthesize canDownload=_canDownload;
@property(nonatomic) _Bool removeExpirationDate; // @synthesize removeExpirationDate=_removeExpirationDate;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *accessLevel; // @synthesize accessLevel=_accessLevel;
- (void).cxx_destruct;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;

@end
