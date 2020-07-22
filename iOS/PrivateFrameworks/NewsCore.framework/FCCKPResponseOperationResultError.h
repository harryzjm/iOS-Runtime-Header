//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPResponseOperationResultErrorClient, FCCKPResponseOperationResultErrorExtension, FCCKPResponseOperationResultErrorServer, NSString;

@interface FCCKPResponseOperationResultError : PBCodable <NSCopying>
{
    FCCKPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorKey;
    FCCKPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    FCCKPResponseOperationResultErrorServer *_serverError;
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorKey; // @synthesize errorKey=_errorKey;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) int retryAfterSeconds; // @synthesize retryAfterSeconds=_retryAfterSeconds;
@property(retain, nonatomic) FCCKPResponseOperationResultErrorExtension *extensionError; // @synthesize extensionError=_extensionError;
@property(retain, nonatomic) FCCKPResponseOperationResultErrorServer *serverError; // @synthesize serverError=_serverError;
@property(retain, nonatomic) FCCKPResponseOperationResultErrorClient *clientError; // @synthesize clientError=_clientError;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasErrorKey;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasRetryAfterSeconds;
@property(readonly, nonatomic) _Bool hasExtensionError;
@property(readonly, nonatomic) _Bool hasServerError;
@property(readonly, nonatomic) _Bool hasClientError;
- (void)dealloc;

@end

