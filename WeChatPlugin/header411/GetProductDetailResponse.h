//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetProductDetailResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasProductInfo:1;
    unsigned int hasRetCode:1;
    unsigned int hasRetMsg:1;
    unsigned int hasRecommendInfo:1;
    int retCode;
    BaseResponse *baseResponse;
    NSString *productInfo;
    NSString *retMsg;
    NSString *recommendInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRecommendInfo:) NSString *recommendInfo; // @synthesize recommendInfo;
@property(readonly, nonatomic) BOOL hasRecommendInfo; // @synthesize hasRecommendInfo;
@property(retain, nonatomic, setter=SetRetMsg:) NSString *retMsg; // @synthesize retMsg;
@property(readonly, nonatomic) BOOL hasRetMsg; // @synthesize hasRetMsg;
@property(nonatomic, setter=SetRetCode:) int retCode; // @synthesize retCode;
@property(readonly, nonatomic) BOOL hasRetCode; // @synthesize hasRetCode;
@property(retain, nonatomic, setter=SetProductInfo:) NSString *productInfo; // @synthesize productInfo;
@property(readonly, nonatomic) BOOL hasProductInfo; // @synthesize hasProductInfo;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

