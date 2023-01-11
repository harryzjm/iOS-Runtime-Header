//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, GEOPDAdamAppIdentifier, GEOPDMerchantInformation, GEOPDWarsawMerchantIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAdamAppIdentifier *_appIdentifier;
    NSString *_industryCategory;
    long long _industryCode;
    NSString *_merchantCode;
    GEOPDMerchantInformation *_merchantInformation;
    NSString *_paymentNetwork;
    NSString *_rawMerchantCode;
    NSString *_terminalId;
    NSString *_transactionCurrencyCode;
    NSString *_transactionId;
    double _transactionLocationAge;
    GEOLocation *_transactionLocation;
    double _transactionTimestamp;
    GEOPDWarsawMerchantIdentifier *_warsawMerchantIdentifier;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _transactionStatus;
    int _transactionType;
    _Bool _coarseLocationUsed;
    _Bool _enableBrandMuidFallback;
    _Bool _fuzzyMatched;
    struct {
        unsigned int has_industryCode:1;
        unsigned int has_transactionLocationAge:1;
        unsigned int has_transactionTimestamp:1;
        unsigned int has_transactionStatus:1;
        unsigned int has_transactionType:1;
        unsigned int has_coarseLocationUsed:1;
        unsigned int has_enableBrandMuidFallback:1;
        unsigned int has_fuzzyMatched:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_industryCategory:1;
        unsigned int read_merchantCode:1;
        unsigned int read_merchantInformation:1;
        unsigned int read_paymentNetwork:1;
        unsigned int read_rawMerchantCode:1;
        unsigned int read_terminalId:1;
        unsigned int read_transactionCurrencyCode:1;
        unsigned int read_transactionId:1;
        unsigned int read_transactionLocation:1;
        unsigned int read_warsawMerchantIdentifier:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCoarseLocationUsed;
@property(nonatomic) _Bool coarseLocationUsed;
@property(nonatomic) _Bool hasFuzzyMatched;
@property(nonatomic) _Bool fuzzyMatched;
@property(retain, nonatomic) NSString *transactionId;
@property(readonly, nonatomic) _Bool hasTransactionId;
- (int)StringAsTransactionStatus:(id)arg1;
- (id)transactionStatusAsString:(int)arg1;
@property(nonatomic) _Bool hasTransactionStatus;
@property(nonatomic) int transactionStatus;
@property(retain, nonatomic) GEOPDMerchantInformation *merchantInformation;
@property(readonly, nonatomic) _Bool hasMerchantInformation;
@property(retain, nonatomic) GEOPDAdamAppIdentifier *appIdentifier;
@property(readonly, nonatomic) _Bool hasAppIdentifier;
@property(retain, nonatomic) GEOPDWarsawMerchantIdentifier *warsawMerchantIdentifier;
@property(readonly, nonatomic) _Bool hasWarsawMerchantIdentifier;
- (int)StringAsTransactionType:(id)arg1;
- (id)transactionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransactionType;
@property(nonatomic) int transactionType;
@property(retain, nonatomic) NSString *transactionCurrencyCode;
@property(readonly, nonatomic) _Bool hasTransactionCurrencyCode;
@property(retain, nonatomic) NSString *terminalId;
@property(readonly, nonatomic) _Bool hasTerminalId;
@property(nonatomic) _Bool hasEnableBrandMuidFallback;
@property(nonatomic) _Bool enableBrandMuidFallback;
@property(nonatomic) _Bool hasIndustryCode;
@property(nonatomic) long long industryCode;
@property(retain, nonatomic) NSString *industryCategory;
@property(readonly, nonatomic) _Bool hasIndustryCategory;
@property(retain, nonatomic) NSString *rawMerchantCode;
@property(readonly, nonatomic) _Bool hasRawMerchantCode;
@property(nonatomic) _Bool hasTransactionLocationAge;
@property(nonatomic) double transactionLocationAge;
@property(retain, nonatomic) GEOLocation *transactionLocation;
@property(readonly, nonatomic) _Bool hasTransactionLocation;
@property(nonatomic) _Bool hasTransactionTimestamp;
@property(nonatomic) double transactionTimestamp;
@property(retain, nonatomic) NSString *merchantCode;
@property(readonly, nonatomic) _Bool hasMerchantCode;
@property(retain, nonatomic) NSString *paymentNetwork;
@property(readonly, nonatomic) _Bool hasPaymentNetwork;
- (id)initWithData:(id)arg1;
- (id)init;

@end
