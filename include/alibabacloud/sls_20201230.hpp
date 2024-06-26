// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SLS20201230_H_
#define ALIBABACLOUD_SLS20201230_H_

#include <alibabacloud/gateway_spi.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Sls20201230 {
class AlertTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AlertTag() {}

  explicit AlertTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~AlertTag() = default;
};
class ConditionConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<string> countCondition{};

  ConditionConfiguration() {}

  explicit ConditionConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = boost::any(*condition);
    }
    if (countCondition) {
      res["countCondition"] = boost::any(*countCondition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["condition"]));
    }
    if (m.find("countCondition") != m.end() && !m["countCondition"].empty()) {
      countCondition = make_shared<string>(boost::any_cast<string>(m["countCondition"]));
    }
  }


  virtual ~ConditionConfiguration() = default;
};
class GroupConfiguration : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fields{};
  shared_ptr<string> type{};

  GroupConfiguration() {}

  explicit GroupConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      res["fields"] = boost::any(*fields);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GroupConfiguration() = default;
};
class JoinConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> condition{};
  shared_ptr<string> type{};

  JoinConfiguration() {}

  explicit JoinConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (condition) {
      res["condition"] = boost::any(*condition);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("condition") != m.end() && !m["condition"].empty()) {
      condition = make_shared<string>(boost::any_cast<string>(m["condition"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~JoinConfiguration() = default;
};
class PolicyConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> actionPolicyId{};
  shared_ptr<string> alertPolicyId{};
  shared_ptr<string> repeatInterval{};

  PolicyConfiguration() {}

  explicit PolicyConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionPolicyId) {
      res["actionPolicyId"] = boost::any(*actionPolicyId);
    }
    if (alertPolicyId) {
      res["alertPolicyId"] = boost::any(*alertPolicyId);
    }
    if (repeatInterval) {
      res["repeatInterval"] = boost::any(*repeatInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actionPolicyId") != m.end() && !m["actionPolicyId"].empty()) {
      actionPolicyId = make_shared<string>(boost::any_cast<string>(m["actionPolicyId"]));
    }
    if (m.find("alertPolicyId") != m.end() && !m["alertPolicyId"].empty()) {
      alertPolicyId = make_shared<string>(boost::any_cast<string>(m["alertPolicyId"]));
    }
    if (m.find("repeatInterval") != m.end() && !m["repeatInterval"].empty()) {
      repeatInterval = make_shared<string>(boost::any_cast<string>(m["repeatInterval"]));
    }
  }


  virtual ~PolicyConfiguration() = default;
};
class AlertQuery : public Darabonba::Model {
public:
  shared_ptr<string> chartTitle{};
  shared_ptr<string> dashboardId{};
  shared_ptr<string> end{};
  shared_ptr<string> powerSqlMode{};
  shared_ptr<string> project{};
  shared_ptr<string> query{};
  shared_ptr<string> region{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> start{};
  shared_ptr<string> store{};
  shared_ptr<string> storeType{};
  shared_ptr<string> timeSpanType{};
  shared_ptr<string> ui{};

  AlertQuery() {}

  explicit AlertQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chartTitle) {
      res["chartTitle"] = boost::any(*chartTitle);
    }
    if (dashboardId) {
      res["dashboardId"] = boost::any(*dashboardId);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (powerSqlMode) {
      res["powerSqlMode"] = boost::any(*powerSqlMode);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    if (store) {
      res["store"] = boost::any(*store);
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    if (timeSpanType) {
      res["timeSpanType"] = boost::any(*timeSpanType);
    }
    if (ui) {
      res["ui"] = boost::any(*ui);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chartTitle") != m.end() && !m["chartTitle"].empty()) {
      chartTitle = make_shared<string>(boost::any_cast<string>(m["chartTitle"]));
    }
    if (m.find("dashboardId") != m.end() && !m["dashboardId"].empty()) {
      dashboardId = make_shared<string>(boost::any_cast<string>(m["dashboardId"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<string>(boost::any_cast<string>(m["end"]));
    }
    if (m.find("powerSqlMode") != m.end() && !m["powerSqlMode"].empty()) {
      powerSqlMode = make_shared<string>(boost::any_cast<string>(m["powerSqlMode"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<string>(boost::any_cast<string>(m["start"]));
    }
    if (m.find("store") != m.end() && !m["store"].empty()) {
      store = make_shared<string>(boost::any_cast<string>(m["store"]));
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
    if (m.find("timeSpanType") != m.end() && !m["timeSpanType"].empty()) {
      timeSpanType = make_shared<string>(boost::any_cast<string>(m["timeSpanType"]));
    }
    if (m.find("ui") != m.end() && !m["ui"].empty()) {
      ui = make_shared<string>(boost::any_cast<string>(m["ui"]));
    }
  }


  virtual ~AlertQuery() = default;
};
class SeverityConfiguration : public Darabonba::Model {
public:
  shared_ptr<ConditionConfiguration> evalCondition{};
  shared_ptr<long> severity{};

  SeverityConfiguration() {}

  explicit SeverityConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evalCondition) {
      res["evalCondition"] = evalCondition ? boost::any(evalCondition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (severity) {
      res["severity"] = boost::any(*severity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("evalCondition") != m.end() && !m["evalCondition"].empty()) {
      if (typeid(map<string, boost::any>) == m["evalCondition"].type()) {
        ConditionConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["evalCondition"]));
        evalCondition = make_shared<ConditionConfiguration>(model1);
      }
    }
    if (m.find("severity") != m.end() && !m["severity"].empty()) {
      severity = make_shared<long>(boost::any_cast<long>(m["severity"]));
    }
  }


  virtual ~SeverityConfiguration() = default;
};
class SinkAlerthubConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  SinkAlerthubConfiguration() {}

  explicit SinkAlerthubConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
  }


  virtual ~SinkAlerthubConfiguration() = default;
};
class SinkCmsConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  SinkCmsConfiguration() {}

  explicit SinkCmsConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
  }


  virtual ~SinkCmsConfiguration() = default;
};
class SinkEventStoreConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> eventStore{};
  shared_ptr<string> project{};
  shared_ptr<string> roleArn{};

  SinkEventStoreConfiguration() {}

  explicit SinkEventStoreConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (eventStore) {
      res["eventStore"] = boost::any(*eventStore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("eventStore") != m.end() && !m["eventStore"].empty()) {
      eventStore = make_shared<string>(boost::any_cast<string>(m["eventStore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
  }


  virtual ~SinkEventStoreConfiguration() = default;
};
class TemplateConfiguration : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> aonotations{};
  shared_ptr<string> id{};
  shared_ptr<string> lang{};
  shared_ptr<map<string, boost::any>> tokens{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  TemplateConfiguration() {}

  explicit TemplateConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aonotations) {
      res["aonotations"] = boost::any(*aonotations);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (lang) {
      res["lang"] = boost::any(*lang);
    }
    if (tokens) {
      res["tokens"] = boost::any(*tokens);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aonotations") != m.end() && !m["aonotations"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["aonotations"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      aonotations = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("lang") != m.end() && !m["lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["lang"]));
    }
    if (m.find("tokens") != m.end() && !m["tokens"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["tokens"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tokens = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~TemplateConfiguration() = default;
};
class AlertConfiguration : public Darabonba::Model {
public:
  shared_ptr<vector<AlertTag>> annotations{};
  shared_ptr<bool> autoAnnotation{};
  shared_ptr<ConditionConfiguration> conditionConfiguration{};
  shared_ptr<string> dashboard{};
  shared_ptr<GroupConfiguration> groupConfiguration{};
  shared_ptr<vector<JoinConfiguration>> joinConfigurations{};
  shared_ptr<vector<AlertTag>> labels{};
  shared_ptr<long> muteUntil{};
  shared_ptr<bool> noDataFire{};
  shared_ptr<long> noDataSeverity{};
  shared_ptr<PolicyConfiguration> policyConfiguration{};
  shared_ptr<vector<AlertQuery>> queryList{};
  shared_ptr<bool> sendResolved{};
  shared_ptr<vector<SeverityConfiguration>> severityConfigurations{};
  shared_ptr<SinkAlerthubConfiguration> sinkAlerthub{};
  shared_ptr<SinkCmsConfiguration> sinkCms{};
  shared_ptr<SinkEventStoreConfiguration> sinkEventStore{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<TemplateConfiguration> templateConfiguration{};
  shared_ptr<long> threshold{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  AlertConfiguration() {}

  explicit AlertConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotations) {
      vector<boost::any> temp1;
      for(auto item1:*annotations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["annotations"] = boost::any(temp1);
    }
    if (autoAnnotation) {
      res["autoAnnotation"] = boost::any(*autoAnnotation);
    }
    if (conditionConfiguration) {
      res["conditionConfiguration"] = conditionConfiguration ? boost::any(conditionConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dashboard) {
      res["dashboard"] = boost::any(*dashboard);
    }
    if (groupConfiguration) {
      res["groupConfiguration"] = groupConfiguration ? boost::any(groupConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (joinConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*joinConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["joinConfigurations"] = boost::any(temp1);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["labels"] = boost::any(temp1);
    }
    if (muteUntil) {
      res["muteUntil"] = boost::any(*muteUntil);
    }
    if (noDataFire) {
      res["noDataFire"] = boost::any(*noDataFire);
    }
    if (noDataSeverity) {
      res["noDataSeverity"] = boost::any(*noDataSeverity);
    }
    if (policyConfiguration) {
      res["policyConfiguration"] = policyConfiguration ? boost::any(policyConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queryList) {
      vector<boost::any> temp1;
      for(auto item1:*queryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryList"] = boost::any(temp1);
    }
    if (sendResolved) {
      res["sendResolved"] = boost::any(*sendResolved);
    }
    if (severityConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*severityConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["severityConfigurations"] = boost::any(temp1);
    }
    if (sinkAlerthub) {
      res["sinkAlerthub"] = sinkAlerthub ? boost::any(sinkAlerthub->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkCms) {
      res["sinkCms"] = sinkCms ? boost::any(sinkCms->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkEventStore) {
      res["sinkEventStore"] = sinkEventStore ? boost::any(sinkEventStore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    if (templateConfiguration) {
      res["templateConfiguration"] = templateConfiguration ? boost::any(templateConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (threshold) {
      res["threshold"] = boost::any(*threshold);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      if (typeid(vector<boost::any>) == m["annotations"].type()) {
        vector<AlertTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["annotations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        annotations = make_shared<vector<AlertTag>>(expect1);
      }
    }
    if (m.find("autoAnnotation") != m.end() && !m["autoAnnotation"].empty()) {
      autoAnnotation = make_shared<bool>(boost::any_cast<bool>(m["autoAnnotation"]));
    }
    if (m.find("conditionConfiguration") != m.end() && !m["conditionConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["conditionConfiguration"].type()) {
        ConditionConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["conditionConfiguration"]));
        conditionConfiguration = make_shared<ConditionConfiguration>(model1);
      }
    }
    if (m.find("dashboard") != m.end() && !m["dashboard"].empty()) {
      dashboard = make_shared<string>(boost::any_cast<string>(m["dashboard"]));
    }
    if (m.find("groupConfiguration") != m.end() && !m["groupConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupConfiguration"].type()) {
        GroupConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupConfiguration"]));
        groupConfiguration = make_shared<GroupConfiguration>(model1);
      }
    }
    if (m.find("joinConfigurations") != m.end() && !m["joinConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["joinConfigurations"].type()) {
        vector<JoinConfiguration> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["joinConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            JoinConfiguration model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        joinConfigurations = make_shared<vector<JoinConfiguration>>(expect1);
      }
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      if (typeid(vector<boost::any>) == m["labels"].type()) {
        vector<AlertTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<AlertTag>>(expect1);
      }
    }
    if (m.find("muteUntil") != m.end() && !m["muteUntil"].empty()) {
      muteUntil = make_shared<long>(boost::any_cast<long>(m["muteUntil"]));
    }
    if (m.find("noDataFire") != m.end() && !m["noDataFire"].empty()) {
      noDataFire = make_shared<bool>(boost::any_cast<bool>(m["noDataFire"]));
    }
    if (m.find("noDataSeverity") != m.end() && !m["noDataSeverity"].empty()) {
      noDataSeverity = make_shared<long>(boost::any_cast<long>(m["noDataSeverity"]));
    }
    if (m.find("policyConfiguration") != m.end() && !m["policyConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["policyConfiguration"].type()) {
        PolicyConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["policyConfiguration"]));
        policyConfiguration = make_shared<PolicyConfiguration>(model1);
      }
    }
    if (m.find("queryList") != m.end() && !m["queryList"].empty()) {
      if (typeid(vector<boost::any>) == m["queryList"].type()) {
        vector<AlertQuery> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AlertQuery model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryList = make_shared<vector<AlertQuery>>(expect1);
      }
    }
    if (m.find("sendResolved") != m.end() && !m["sendResolved"].empty()) {
      sendResolved = make_shared<bool>(boost::any_cast<bool>(m["sendResolved"]));
    }
    if (m.find("severityConfigurations") != m.end() && !m["severityConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["severityConfigurations"].type()) {
        vector<SeverityConfiguration> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["severityConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SeverityConfiguration model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        severityConfigurations = make_shared<vector<SeverityConfiguration>>(expect1);
      }
    }
    if (m.find("sinkAlerthub") != m.end() && !m["sinkAlerthub"].empty()) {
      if (typeid(map<string, boost::any>) == m["sinkAlerthub"].type()) {
        SinkAlerthubConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sinkAlerthub"]));
        sinkAlerthub = make_shared<SinkAlerthubConfiguration>(model1);
      }
    }
    if (m.find("sinkCms") != m.end() && !m["sinkCms"].empty()) {
      if (typeid(map<string, boost::any>) == m["sinkCms"].type()) {
        SinkCmsConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sinkCms"]));
        sinkCms = make_shared<SinkCmsConfiguration>(model1);
      }
    }
    if (m.find("sinkEventStore") != m.end() && !m["sinkEventStore"].empty()) {
      if (typeid(map<string, boost::any>) == m["sinkEventStore"].type()) {
        SinkEventStoreConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sinkEventStore"]));
        sinkEventStore = make_shared<SinkEventStoreConfiguration>(model1);
      }
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("templateConfiguration") != m.end() && !m["templateConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["templateConfiguration"].type()) {
        TemplateConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["templateConfiguration"]));
        templateConfiguration = make_shared<TemplateConfiguration>(model1);
      }
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      threshold = make_shared<long>(boost::any_cast<long>(m["threshold"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~AlertConfiguration() = default;
};
class Schedule : public Darabonba::Model {
public:
  shared_ptr<string> cronExpression{};
  shared_ptr<long> delay{};
  shared_ptr<string> interval{};
  shared_ptr<bool> runImmediately{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> type{};

  Schedule() {}

  explicit Schedule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cronExpression) {
      res["cronExpression"] = boost::any(*cronExpression);
    }
    if (delay) {
      res["delay"] = boost::any(*delay);
    }
    if (interval) {
      res["interval"] = boost::any(*interval);
    }
    if (runImmediately) {
      res["runImmediately"] = boost::any(*runImmediately);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cronExpression") != m.end() && !m["cronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["cronExpression"]));
    }
    if (m.find("delay") != m.end() && !m["delay"].empty()) {
      delay = make_shared<long>(boost::any_cast<long>(m["delay"]));
    }
    if (m.find("interval") != m.end() && !m["interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["interval"]));
    }
    if (m.find("runImmediately") != m.end() && !m["runImmediately"].empty()) {
      runImmediately = make_shared<bool>(boost::any_cast<bool>(m["runImmediately"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~Schedule() = default;
};
class Alert : public Darabonba::Model {
public:
  shared_ptr<AlertConfiguration> configuration{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<Schedule> schedule{};
  shared_ptr<string> status{};

  Alert() {}

  explicit Alert(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        AlertConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<AlertConfiguration>(model1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~Alert() = default;
};
class ConsumerGroup : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> order{};
  shared_ptr<long> timeout{};

  ConsumerGroup() {}

  explicit ConsumerGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<bool>(boost::any_cast<bool>(m["order"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~ConsumerGroup() = default;
};
class ETLConfigurationSink : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> logstore{};
  shared_ptr<string> name{};
  shared_ptr<string> project{};
  shared_ptr<string> roleArn{};

  ETLConfigurationSink() {}

  explicit ETLConfigurationSink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["accessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("accessKeySecret") != m.end() && !m["accessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["accessKeySecret"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
  }


  virtual ~ETLConfigurationSink() = default;
};
class ETLConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<long> fromTime{};
  shared_ptr<string> logstore{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> script{};
  shared_ptr<vector<ETLConfigurationSink>> sinks{};
  shared_ptr<long> toTime{};

  ETLConfiguration() {}

  explicit ETLConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["accessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (fromTime) {
      res["fromTime"] = boost::any(*fromTime);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (script) {
      res["script"] = boost::any(*script);
    }
    if (sinks) {
      vector<boost::any> temp1;
      for(auto item1:*sinks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sinks"] = boost::any(temp1);
    }
    if (toTime) {
      res["toTime"] = boost::any(*toTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("accessKeySecret") != m.end() && !m["accessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["accessKeySecret"]));
    }
    if (m.find("fromTime") != m.end() && !m["fromTime"].empty()) {
      fromTime = make_shared<long>(boost::any_cast<long>(m["fromTime"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("script") != m.end() && !m["script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["script"]));
    }
    if (m.find("sinks") != m.end() && !m["sinks"].empty()) {
      if (typeid(vector<boost::any>) == m["sinks"].type()) {
        vector<ETLConfigurationSink> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sinks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ETLConfigurationSink model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sinks = make_shared<vector<ETLConfigurationSink>>(expect1);
      }
    }
    if (m.find("toTime") != m.end() && !m["toTime"].empty()) {
      toTime = make_shared<long>(boost::any_cast<long>(m["toTime"]));
    }
  }


  virtual ~ETLConfiguration() = default;
};
class ETL : public Darabonba::Model {
public:
  shared_ptr<ETLConfiguration> configuration{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> status{};

  ETL() {}

  explicit ETL(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleId) {
      res["scheduleId"] = boost::any(*scheduleId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        ETLConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<ETLConfiguration>(model1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleId") != m.end() && !m["scheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["scheduleId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ETL() = default;
};
class EncryptUserCmkConf : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> cmkKeyId{};
  shared_ptr<string> regionId{};

  EncryptUserCmkConf() {}

  explicit EncryptUserCmkConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["arn"] = boost::any(*arn);
    }
    if (cmkKeyId) {
      res["cmk_key_id"] = boost::any(*cmkKeyId);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arn") != m.end() && !m["arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["arn"]));
    }
    if (m.find("cmk_key_id") != m.end() && !m["cmk_key_id"].empty()) {
      cmkKeyId = make_shared<string>(boost::any_cast<string>(m["cmk_key_id"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
  }


  virtual ~EncryptUserCmkConf() = default;
};
class EncryptConf : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> encryptType{};
  shared_ptr<EncryptUserCmkConf> userCmkInfo{};

  EncryptConf() {}

  explicit EncryptConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (encryptType) {
      res["encrypt_type"] = boost::any(*encryptType);
    }
    if (userCmkInfo) {
      res["user_cmk_info"] = userCmkInfo ? boost::any(userCmkInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("encrypt_type") != m.end() && !m["encrypt_type"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["encrypt_type"]));
    }
    if (m.find("user_cmk_info") != m.end() && !m["user_cmk_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["user_cmk_info"].type()) {
        EncryptUserCmkConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["user_cmk_info"]));
        userCmkInfo = make_shared<EncryptUserCmkConf>(model1);
      }
    }
  }


  virtual ~EncryptConf() = default;
};
class Histogram : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> from{};
  shared_ptr<string> progress{};
  shared_ptr<long> to{};

  Histogram() {}

  explicit Histogram(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["progress"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~Histogram() = default;
};
class LogContent : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  LogContent() {}

  explicit LogContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~LogContent() = default;
};
class LogTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  LogTag() {}

  explicit LogTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~LogTag() = default;
};
class LogItem : public Darabonba::Model {
public:
  shared_ptr<vector<LogContent>> contents{};
  shared_ptr<long> time{};

  LogItem() {}

  explicit LogItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contents) {
      vector<boost::any> temp1;
      for(auto item1:*contents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contents"] = boost::any(temp1);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      if (typeid(vector<boost::any>) == m["Contents"].type()) {
        vector<LogContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LogContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contents = make_shared<vector<LogContent>>(expect1);
      }
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~LogItem() = default;
};
class LogGroup : public Darabonba::Model {
public:
  shared_ptr<vector<LogTag>> logTags{};
  shared_ptr<vector<LogItem>> logs{};
  shared_ptr<string> source{};
  shared_ptr<string> topic{};

  LogGroup() {}

  explicit LogGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logTags) {
      vector<boost::any> temp1;
      for(auto item1:*logTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogTags"] = boost::any(temp1);
    }
    if (logs) {
      vector<boost::any> temp1;
      for(auto item1:*logs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Logs"] = boost::any(temp1);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogTags") != m.end() && !m["LogTags"].empty()) {
      if (typeid(vector<boost::any>) == m["LogTags"].type()) {
        vector<LogTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LogTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logTags = make_shared<vector<LogTag>>(expect1);
      }
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<LogItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Logs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LogItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logs = make_shared<vector<LogItem>>(expect1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~LogGroup() = default;
};
class LogtailConfigOutputDetail : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> logstoreName{};
  shared_ptr<string> region{};

  LogtailConfigOutputDetail() {}

  explicit LogtailConfigOutputDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
  }


  virtual ~LogtailConfigOutputDetail() = default;
};
class LogtailConfig : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, boost::any>> inputDetail{};
  shared_ptr<string> inputType{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> logSample{};
  shared_ptr<LogtailConfigOutputDetail> outputDetail{};
  shared_ptr<string> outputType{};

  LogtailConfig() {}

  explicit LogtailConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["configName"] = boost::any(*configName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (inputDetail) {
      res["inputDetail"] = boost::any(*inputDetail);
    }
    if (inputType) {
      res["inputType"] = boost::any(*inputType);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (logSample) {
      res["logSample"] = boost::any(*logSample);
    }
    if (outputDetail) {
      res["outputDetail"] = outputDetail ? boost::any(outputDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputType) {
      res["outputType"] = boost::any(*outputType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configName") != m.end() && !m["configName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["configName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("inputDetail") != m.end() && !m["inputDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["inputDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputDetail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("inputType") != m.end() && !m["inputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["inputType"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("logSample") != m.end() && !m["logSample"].empty()) {
      logSample = make_shared<string>(boost::any_cast<string>(m["logSample"]));
    }
    if (m.find("outputDetail") != m.end() && !m["outputDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["outputDetail"].type()) {
        LogtailConfigOutputDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["outputDetail"]));
        outputDetail = make_shared<LogtailConfigOutputDetail>(model1);
      }
    }
    if (m.find("outputType") != m.end() && !m["outputType"].empty()) {
      outputType = make_shared<string>(boost::any_cast<string>(m["outputType"]));
    }
  }


  virtual ~LogtailConfig() = default;
};
class LogtailPipelineConfig : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> aggregators{};
  shared_ptr<string> configName{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<map<string, boost::any>>> flushers{};
  shared_ptr<map<string, boost::any>> global{};
  shared_ptr<vector<map<string, boost::any>>> inputs{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> logSample{};
  shared_ptr<vector<map<string, boost::any>>> processors{};

  LogtailPipelineConfig() {}

  explicit LogtailPipelineConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregators) {
      res["aggregators"] = boost::any(*aggregators);
    }
    if (configName) {
      res["configName"] = boost::any(*configName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (flushers) {
      res["flushers"] = boost::any(*flushers);
    }
    if (global) {
      res["global"] = boost::any(*global);
    }
    if (inputs) {
      res["inputs"] = boost::any(*inputs);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (logSample) {
      res["logSample"] = boost::any(*logSample);
    }
    if (processors) {
      res["processors"] = boost::any(*processors);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aggregators") != m.end() && !m["aggregators"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["aggregators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["aggregators"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      aggregators = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("configName") != m.end() && !m["configName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["configName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("flushers") != m.end() && !m["flushers"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["flushers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["flushers"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      flushers = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("global") != m.end() && !m["global"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["global"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      global = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("inputs") != m.end() && !m["inputs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["inputs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["inputs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      inputs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("logSample") != m.end() && !m["logSample"].empty()) {
      logSample = make_shared<string>(boost::any_cast<string>(m["logSample"]));
    }
    if (m.find("processors") != m.end() && !m["processors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["processors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["processors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      processors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~LogtailPipelineConfig() = default;
};
class MLDataParamAnnotationsValue : public Darabonba::Model {
public:
  shared_ptr<string> annotatedBy{};
  shared_ptr<long> updateTime{};
  shared_ptr<vector<map<string, string>>> results{};

  MLDataParamAnnotationsValue() {}

  explicit MLDataParamAnnotationsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotatedBy) {
      res["annotatedBy"] = boost::any(*annotatedBy);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (results) {
      res["results"] = boost::any(*results);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotatedBy") != m.end() && !m["annotatedBy"].empty()) {
      annotatedBy = make_shared<string>(boost::any_cast<string>(m["annotatedBy"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("results") != m.end() && !m["results"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["results"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      results = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~MLDataParamAnnotationsValue() = default;
};
class MLDataParamPredictionsValue : public Darabonba::Model {
public:
  shared_ptr<string> annotatedBy{};
  shared_ptr<long> updateTime{};
  shared_ptr<vector<map<string, string>>> results{};

  MLDataParamPredictionsValue() {}

  explicit MLDataParamPredictionsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotatedBy) {
      res["annotatedBy"] = boost::any(*annotatedBy);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (results) {
      res["results"] = boost::any(*results);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotatedBy") != m.end() && !m["annotatedBy"].empty()) {
      annotatedBy = make_shared<string>(boost::any_cast<string>(m["annotatedBy"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("results") != m.end() && !m["results"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["results"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      results = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~MLDataParamPredictionsValue() = default;
};
class MLDataParam : public Darabonba::Model {
public:
  shared_ptr<string> annotationdataId{};
  shared_ptr<map<string, MLDataParamAnnotationsValue>> annotations{};
  shared_ptr<map<string, string>> config{};
  shared_ptr<long> createTime{};
  shared_ptr<string> dataHash{};
  shared_ptr<string> datasetId{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<map<string, MLDataParamPredictionsValue>> predictions{};
  shared_ptr<string> value{};
  shared_ptr<string> valueType{};

  MLDataParam() {}

  explicit MLDataParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotationdataId) {
      res["annotationdataId"] = boost::any(*annotationdataId);
    }
    if (annotations) {
      map<string, boost::any> temp1;
      for(auto item1:*annotations){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["annotations"] = boost::any(temp1);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataHash) {
      res["dataHash"] = boost::any(*dataHash);
    }
    if (datasetId) {
      res["datasetId"] = boost::any(*datasetId);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (predictions) {
      map<string, boost::any> temp1;
      for(auto item1:*predictions){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["predictions"] = boost::any(temp1);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueType) {
      res["valueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotationdataId") != m.end() && !m["annotationdataId"].empty()) {
      annotationdataId = make_shared<string>(boost::any_cast<string>(m["annotationdataId"]));
    }
    if (m.find("annotations") != m.end() && !m["annotations"].empty()) {
      if (typeid(map<string, boost::any>) == m["annotations"].type()) {
        map<string, MLDataParamAnnotationsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["annotations"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            MLDataParamAnnotationsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        annotations = make_shared<map<string, MLDataParamAnnotationsValue>>(expect1);
      }
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["config"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("dataHash") != m.end() && !m["dataHash"].empty()) {
      dataHash = make_shared<string>(boost::any_cast<string>(m["dataHash"]));
    }
    if (m.find("datasetId") != m.end() && !m["datasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["datasetId"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("predictions") != m.end() && !m["predictions"].empty()) {
      if (typeid(map<string, boost::any>) == m["predictions"].type()) {
        map<string, MLDataParamPredictionsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["predictions"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            MLDataParamPredictionsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        predictions = make_shared<map<string, MLDataParamPredictionsValue>>(expect1);
      }
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueType") != m.end() && !m["valueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["valueType"]));
    }
  }


  virtual ~MLDataParam() = default;
};
class MLDataSetParam : public Darabonba::Model {
public:
  shared_ptr<string> createBy{};
  shared_ptr<long> createTime{};
  shared_ptr<string> dataType{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> description{};
  shared_ptr<string> labelId{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> settingType{};

  MLDataSetParam() {}

  explicit MLDataSetParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createBy) {
      res["createBy"] = boost::any(*createBy);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataType) {
      res["dataType"] = boost::any(*dataType);
    }
    if (datasetId) {
      res["datasetId"] = boost::any(*datasetId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (labelId) {
      res["labelId"] = boost::any(*labelId);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (settingType) {
      res["settingType"] = boost::any(*settingType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createBy") != m.end() && !m["createBy"].empty()) {
      createBy = make_shared<string>(boost::any_cast<string>(m["createBy"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("dataType") != m.end() && !m["dataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["dataType"]));
    }
    if (m.find("datasetId") != m.end() && !m["datasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["datasetId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("labelId") != m.end() && !m["labelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["labelId"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("settingType") != m.end() && !m["settingType"].empty()) {
      settingType = make_shared<string>(boost::any_cast<string>(m["settingType"]));
    }
  }


  virtual ~MLDataSetParam() = default;
};
class MLLabelParamSettings : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> mode{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  MLLabelParamSettings() {}

  explicit MLLabelParamSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~MLLabelParamSettings() = default;
};
class MLLabelParam : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> labelId{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> name{};
  shared_ptr<vector<MLLabelParamSettings>> settings{};
  shared_ptr<string> type{};

  MLLabelParam() {}

  explicit MLLabelParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (labelId) {
      res["labelId"] = boost::any(*labelId);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (settings) {
      vector<boost::any> temp1;
      for(auto item1:*settings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["settings"] = boost::any(temp1);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("labelId") != m.end() && !m["labelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["labelId"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("settings") != m.end() && !m["settings"].empty()) {
      if (typeid(vector<boost::any>) == m["settings"].type()) {
        vector<MLLabelParamSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["settings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MLLabelParamSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        settings = make_shared<vector<MLLabelParamSettings>>(expect1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~MLLabelParam() = default;
};
class MLServiceAnalysisParam : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> input{};
  shared_ptr<map<string, string>> parameter{};

  MLServiceAnalysisParam() {}

  explicit MLServiceAnalysisParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (input) {
      res["input"] = boost::any(*input);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("input") != m.end() && !m["input"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["input"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["input"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      input = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["parameter"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~MLServiceAnalysisParam() = default;
};
class MLServiceParamModel : public Darabonba::Model {
public:
  shared_ptr<string> modelResourceId{};
  shared_ptr<string> modelResourceType{};

  MLServiceParamModel() {}

  explicit MLServiceParamModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelResourceId) {
      res["modelResourceId"] = boost::any(*modelResourceId);
    }
    if (modelResourceType) {
      res["modelResourceType"] = boost::any(*modelResourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelResourceId") != m.end() && !m["modelResourceId"].empty()) {
      modelResourceId = make_shared<string>(boost::any_cast<string>(m["modelResourceId"]));
    }
    if (m.find("modelResourceType") != m.end() && !m["modelResourceType"].empty()) {
      modelResourceType = make_shared<string>(boost::any_cast<string>(m["modelResourceType"]));
    }
  }


  virtual ~MLServiceParamModel() = default;
};
class MLServiceParamResource : public Darabonba::Model {
public:
  shared_ptr<long> cpuLimit{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memoryLimit{};
  shared_ptr<long> replica{};

  MLServiceParamResource() {}

  explicit MLServiceParamResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuLimit) {
      res["cpuLimit"] = boost::any(*cpuLimit);
    }
    if (gpu) {
      res["gpu"] = boost::any(*gpu);
    }
    if (memoryLimit) {
      res["memoryLimit"] = boost::any(*memoryLimit);
    }
    if (replica) {
      res["replica"] = boost::any(*replica);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpuLimit") != m.end() && !m["cpuLimit"].empty()) {
      cpuLimit = make_shared<long>(boost::any_cast<long>(m["cpuLimit"]));
    }
    if (m.find("gpu") != m.end() && !m["gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["gpu"]));
    }
    if (m.find("memoryLimit") != m.end() && !m["memoryLimit"].empty()) {
      memoryLimit = make_shared<long>(boost::any_cast<long>(m["memoryLimit"]));
    }
    if (m.find("replica") != m.end() && !m["replica"].empty()) {
      replica = make_shared<long>(boost::any_cast<long>(m["replica"]));
    }
  }


  virtual ~MLServiceParamResource() = default;
};
class MLServiceParam : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<MLServiceParamModel> model{};
  shared_ptr<string> name{};
  shared_ptr<MLServiceParamResource> resource{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTimestamp{};

  MLServiceParam() {}

  explicit MLServiceParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (model) {
      res["model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resource) {
      res["resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTimestamp) {
      res["updateTimestamp"] = boost::any(*updateTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("model") != m.end() && !m["model"].empty()) {
      if (typeid(map<string, boost::any>) == m["model"].type()) {
        MLServiceParamModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["model"]));
        model = make_shared<MLServiceParamModel>(model1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["resource"].type()) {
        MLServiceParamResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["resource"]));
        resource = make_shared<MLServiceParamResource>(model1);
      }
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["serviceType"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTimestamp") != m.end() && !m["updateTimestamp"].empty()) {
      updateTimestamp = make_shared<long>(boost::any_cast<long>(m["updateTimestamp"]));
    }
  }


  virtual ~MLServiceParam() = default;
};
class MaxComputeExportConfigurationSink : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fields{};
  shared_ptr<string> odpsAccessKeyId{};
  shared_ptr<string> odpsAccessSecret{};
  shared_ptr<string> odpsEndpoint{};
  shared_ptr<string> odpsProject{};
  shared_ptr<string> odpsRolearn{};
  shared_ptr<string> odpsTable{};
  shared_ptr<string> odpsTunnelEndpoint{};
  shared_ptr<vector<string>> partitionColumn{};
  shared_ptr<string> partitionTimeFormat{};
  shared_ptr<string> timeZone{};

  MaxComputeExportConfigurationSink() {}

  explicit MaxComputeExportConfigurationSink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      res["fields"] = boost::any(*fields);
    }
    if (odpsAccessKeyId) {
      res["odpsAccessKeyId"] = boost::any(*odpsAccessKeyId);
    }
    if (odpsAccessSecret) {
      res["odpsAccessSecret"] = boost::any(*odpsAccessSecret);
    }
    if (odpsEndpoint) {
      res["odpsEndpoint"] = boost::any(*odpsEndpoint);
    }
    if (odpsProject) {
      res["odpsProject"] = boost::any(*odpsProject);
    }
    if (odpsRolearn) {
      res["odpsRolearn"] = boost::any(*odpsRolearn);
    }
    if (odpsTable) {
      res["odpsTable"] = boost::any(*odpsTable);
    }
    if (odpsTunnelEndpoint) {
      res["odpsTunnelEndpoint"] = boost::any(*odpsTunnelEndpoint);
    }
    if (partitionColumn) {
      res["partitionColumn"] = boost::any(*partitionColumn);
    }
    if (partitionTimeFormat) {
      res["partitionTimeFormat"] = boost::any(*partitionTimeFormat);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("odpsAccessKeyId") != m.end() && !m["odpsAccessKeyId"].empty()) {
      odpsAccessKeyId = make_shared<string>(boost::any_cast<string>(m["odpsAccessKeyId"]));
    }
    if (m.find("odpsAccessSecret") != m.end() && !m["odpsAccessSecret"].empty()) {
      odpsAccessSecret = make_shared<string>(boost::any_cast<string>(m["odpsAccessSecret"]));
    }
    if (m.find("odpsEndpoint") != m.end() && !m["odpsEndpoint"].empty()) {
      odpsEndpoint = make_shared<string>(boost::any_cast<string>(m["odpsEndpoint"]));
    }
    if (m.find("odpsProject") != m.end() && !m["odpsProject"].empty()) {
      odpsProject = make_shared<string>(boost::any_cast<string>(m["odpsProject"]));
    }
    if (m.find("odpsRolearn") != m.end() && !m["odpsRolearn"].empty()) {
      odpsRolearn = make_shared<string>(boost::any_cast<string>(m["odpsRolearn"]));
    }
    if (m.find("odpsTable") != m.end() && !m["odpsTable"].empty()) {
      odpsTable = make_shared<string>(boost::any_cast<string>(m["odpsTable"]));
    }
    if (m.find("odpsTunnelEndpoint") != m.end() && !m["odpsTunnelEndpoint"].empty()) {
      odpsTunnelEndpoint = make_shared<string>(boost::any_cast<string>(m["odpsTunnelEndpoint"]));
    }
    if (m.find("partitionColumn") != m.end() && !m["partitionColumn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["partitionColumn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["partitionColumn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      partitionColumn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("partitionTimeFormat") != m.end() && !m["partitionTimeFormat"].empty()) {
      partitionTimeFormat = make_shared<string>(boost::any_cast<string>(m["partitionTimeFormat"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~MaxComputeExportConfigurationSink() = default;
};
class MaxComputeExportConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> fromTime{};
  shared_ptr<string> logstore{};
  shared_ptr<string> roleArn{};
  shared_ptr<MaxComputeExportConfigurationSink> sink{};
  shared_ptr<long> toTime{};

  MaxComputeExportConfiguration() {}

  explicit MaxComputeExportConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromTime) {
      res["fromTime"] = boost::any(*fromTime);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (sink) {
      res["sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (toTime) {
      res["toTime"] = boost::any(*toTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fromTime") != m.end() && !m["fromTime"].empty()) {
      fromTime = make_shared<long>(boost::any_cast<long>(m["fromTime"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("sink") != m.end() && !m["sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["sink"].type()) {
        MaxComputeExportConfigurationSink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sink"]));
        sink = make_shared<MaxComputeExportConfigurationSink>(model1);
      }
    }
    if (m.find("toTime") != m.end() && !m["toTime"].empty()) {
      toTime = make_shared<long>(boost::any_cast<long>(m["toTime"]));
    }
  }


  virtual ~MaxComputeExportConfiguration() = default;
};
class MaxComputeExport : public Darabonba::Model {
public:
  shared_ptr<MaxComputeExportConfiguration> configuration{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  MaxComputeExport() {}

  explicit MaxComputeExport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        MaxComputeExportConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<MaxComputeExportConfiguration>(model1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~MaxComputeExport() = default;
};
class OSSExportConfigurationSink : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<long> bufferInterval{};
  shared_ptr<long> bufferSize{};
  shared_ptr<string> compressionType{};
  shared_ptr<map<string, boost::any>> contentDetail{};
  shared_ptr<string> contentType{};
  shared_ptr<long> delaySec{};
  shared_ptr<long> delaySeconds{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> pathFormat{};
  shared_ptr<string> pathFormatType{};
  shared_ptr<string> prefix{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> suffix{};
  shared_ptr<string> timeZone{};

  OSSExportConfigurationSink() {}

  explicit OSSExportConfigurationSink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (bufferInterval) {
      res["bufferInterval"] = boost::any(*bufferInterval);
    }
    if (bufferSize) {
      res["bufferSize"] = boost::any(*bufferSize);
    }
    if (compressionType) {
      res["compressionType"] = boost::any(*compressionType);
    }
    if (contentDetail) {
      res["contentDetail"] = boost::any(*contentDetail);
    }
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (delaySec) {
      res["delaySec"] = boost::any(*delaySec);
    }
    if (delaySeconds) {
      res["delaySeconds"] = boost::any(*delaySeconds);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (pathFormat) {
      res["pathFormat"] = boost::any(*pathFormat);
    }
    if (pathFormatType) {
      res["pathFormatType"] = boost::any(*pathFormatType);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (suffix) {
      res["suffix"] = boost::any(*suffix);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("bufferInterval") != m.end() && !m["bufferInterval"].empty()) {
      bufferInterval = make_shared<long>(boost::any_cast<long>(m["bufferInterval"]));
    }
    if (m.find("bufferSize") != m.end() && !m["bufferSize"].empty()) {
      bufferSize = make_shared<long>(boost::any_cast<long>(m["bufferSize"]));
    }
    if (m.find("compressionType") != m.end() && !m["compressionType"].empty()) {
      compressionType = make_shared<string>(boost::any_cast<string>(m["compressionType"]));
    }
    if (m.find("contentDetail") != m.end() && !m["contentDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["contentDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contentDetail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("delaySec") != m.end() && !m["delaySec"].empty()) {
      delaySec = make_shared<long>(boost::any_cast<long>(m["delaySec"]));
    }
    if (m.find("delaySeconds") != m.end() && !m["delaySeconds"].empty()) {
      delaySeconds = make_shared<long>(boost::any_cast<long>(m["delaySeconds"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("pathFormat") != m.end() && !m["pathFormat"].empty()) {
      pathFormat = make_shared<string>(boost::any_cast<string>(m["pathFormat"]));
    }
    if (m.find("pathFormatType") != m.end() && !m["pathFormatType"].empty()) {
      pathFormatType = make_shared<string>(boost::any_cast<string>(m["pathFormatType"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("suffix") != m.end() && !m["suffix"].empty()) {
      suffix = make_shared<string>(boost::any_cast<string>(m["suffix"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~OSSExportConfigurationSink() = default;
};
class OSSExportConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> fromTime{};
  shared_ptr<string> logstore{};
  shared_ptr<string> roleArn{};
  shared_ptr<OSSExportConfigurationSink> sink{};
  shared_ptr<long> toTime{};

  OSSExportConfiguration() {}

  explicit OSSExportConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromTime) {
      res["fromTime"] = boost::any(*fromTime);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (sink) {
      res["sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (toTime) {
      res["toTime"] = boost::any(*toTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fromTime") != m.end() && !m["fromTime"].empty()) {
      fromTime = make_shared<long>(boost::any_cast<long>(m["fromTime"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("sink") != m.end() && !m["sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["sink"].type()) {
        OSSExportConfigurationSink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sink"]));
        sink = make_shared<OSSExportConfigurationSink>(model1);
      }
    }
    if (m.find("toTime") != m.end() && !m["toTime"].empty()) {
      toTime = make_shared<long>(boost::any_cast<long>(m["toTime"]));
    }
  }


  virtual ~OSSExportConfiguration() = default;
};
class OSSExport : public Darabonba::Model {
public:
  shared_ptr<OSSExportConfiguration> configuration{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  OSSExport() {}

  explicit OSSExport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        OSSExportConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<OSSExportConfiguration>(model1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~OSSExport() = default;
};
class OSSIngestionConfigurationSource : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> compressionCodec{};
  shared_ptr<string> encoding{};
  shared_ptr<long> endTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<map<string, boost::any>> format{};
  shared_ptr<string> interval{};
  shared_ptr<string> pattern{};
  shared_ptr<string> prefix{};
  shared_ptr<bool> restoreObjectEnabled{};
  shared_ptr<string> roleARN{};
  shared_ptr<long> startTime{};
  shared_ptr<string> timeField{};
  shared_ptr<string> timeFormat{};
  shared_ptr<string> timePattern{};
  shared_ptr<string> timeZone{};
  shared_ptr<bool> useMetaIndex{};

  OSSIngestionConfigurationSource() {}

  explicit OSSIngestionConfigurationSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (compressionCodec) {
      res["compressionCodec"] = boost::any(*compressionCodec);
    }
    if (encoding) {
      res["encoding"] = boost::any(*encoding);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (format) {
      res["format"] = boost::any(*format);
    }
    if (interval) {
      res["interval"] = boost::any(*interval);
    }
    if (pattern) {
      res["pattern"] = boost::any(*pattern);
    }
    if (prefix) {
      res["prefix"] = boost::any(*prefix);
    }
    if (restoreObjectEnabled) {
      res["restoreObjectEnabled"] = boost::any(*restoreObjectEnabled);
    }
    if (roleARN) {
      res["roleARN"] = boost::any(*roleARN);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (timeField) {
      res["timeField"] = boost::any(*timeField);
    }
    if (timeFormat) {
      res["timeFormat"] = boost::any(*timeFormat);
    }
    if (timePattern) {
      res["timePattern"] = boost::any(*timePattern);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    if (useMetaIndex) {
      res["useMetaIndex"] = boost::any(*useMetaIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("compressionCodec") != m.end() && !m["compressionCodec"].empty()) {
      compressionCodec = make_shared<string>(boost::any_cast<string>(m["compressionCodec"]));
    }
    if (m.find("encoding") != m.end() && !m["encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["encoding"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("format") != m.end() && !m["format"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["format"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      format = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("interval") != m.end() && !m["interval"].empty()) {
      interval = make_shared<string>(boost::any_cast<string>(m["interval"]));
    }
    if (m.find("pattern") != m.end() && !m["pattern"].empty()) {
      pattern = make_shared<string>(boost::any_cast<string>(m["pattern"]));
    }
    if (m.find("prefix") != m.end() && !m["prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["prefix"]));
    }
    if (m.find("restoreObjectEnabled") != m.end() && !m["restoreObjectEnabled"].empty()) {
      restoreObjectEnabled = make_shared<bool>(boost::any_cast<bool>(m["restoreObjectEnabled"]));
    }
    if (m.find("roleARN") != m.end() && !m["roleARN"].empty()) {
      roleARN = make_shared<string>(boost::any_cast<string>(m["roleARN"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("timeField") != m.end() && !m["timeField"].empty()) {
      timeField = make_shared<string>(boost::any_cast<string>(m["timeField"]));
    }
    if (m.find("timeFormat") != m.end() && !m["timeFormat"].empty()) {
      timeFormat = make_shared<string>(boost::any_cast<string>(m["timeFormat"]));
    }
    if (m.find("timePattern") != m.end() && !m["timePattern"].empty()) {
      timePattern = make_shared<string>(boost::any_cast<string>(m["timePattern"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
    if (m.find("useMetaIndex") != m.end() && !m["useMetaIndex"].empty()) {
      useMetaIndex = make_shared<bool>(boost::any_cast<bool>(m["useMetaIndex"]));
    }
  }


  virtual ~OSSIngestionConfigurationSource() = default;
};
class OSSIngestionConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<OSSIngestionConfigurationSource> source{};

  OSSIngestionConfiguration() {}

  explicit OSSIngestionConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (source) {
      res["source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      if (typeid(map<string, boost::any>) == m["source"].type()) {
        OSSIngestionConfigurationSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["source"]));
        source = make_shared<OSSIngestionConfigurationSource>(model1);
      }
    }
  }


  virtual ~OSSIngestionConfiguration() = default;
};
class OSSIngestion : public Darabonba::Model {
public:
  shared_ptr<OSSIngestionConfiguration> configuration{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<Schedule> schedule{};
  shared_ptr<string> status{};

  OSSIngestion() {}

  explicit OSSIngestion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        OSSIngestionConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<OSSIngestionConfiguration>(model1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~OSSIngestion() = default;
};
class SavedSearch : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> logstore{};
  shared_ptr<string> savedsearchName{};
  shared_ptr<string> searchQuery{};
  shared_ptr<string> topic{};

  SavedSearch() {}

  explicit SavedSearch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (savedsearchName) {
      res["savedsearchName"] = boost::any(*savedsearchName);
    }
    if (searchQuery) {
      res["searchQuery"] = boost::any(*searchQuery);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("savedsearchName") != m.end() && !m["savedsearchName"].empty()) {
      savedsearchName = make_shared<string>(boost::any_cast<string>(m["savedsearchName"]));
    }
    if (m.find("searchQuery") != m.end() && !m["searchQuery"].empty()) {
      searchQuery = make_shared<string>(boost::any_cast<string>(m["searchQuery"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~SavedSearch() = default;
};
class ScheduledSQLConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> dataFormat{};
  shared_ptr<string> destEndpoint{};
  shared_ptr<string> destLogstore{};
  shared_ptr<string> destProject{};
  shared_ptr<string> destRoleArn{};
  shared_ptr<long> fromTime{};
  shared_ptr<string> fromTimeExpr{};
  shared_ptr<long> maxRetries{};
  shared_ptr<long> maxRunTimeInSeconds{};
  shared_ptr<map<string, boost::any>> parameters{};
  shared_ptr<string> resourcePool{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> script{};
  shared_ptr<string> sourceLogstore{};
  shared_ptr<string> sqlType{};
  shared_ptr<long> toTime{};
  shared_ptr<string> toTimeExpr{};

  ScheduledSQLConfiguration() {}

  explicit ScheduledSQLConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataFormat) {
      res["dataFormat"] = boost::any(*dataFormat);
    }
    if (destEndpoint) {
      res["destEndpoint"] = boost::any(*destEndpoint);
    }
    if (destLogstore) {
      res["destLogstore"] = boost::any(*destLogstore);
    }
    if (destProject) {
      res["destProject"] = boost::any(*destProject);
    }
    if (destRoleArn) {
      res["destRoleArn"] = boost::any(*destRoleArn);
    }
    if (fromTime) {
      res["fromTime"] = boost::any(*fromTime);
    }
    if (fromTimeExpr) {
      res["fromTimeExpr"] = boost::any(*fromTimeExpr);
    }
    if (maxRetries) {
      res["maxRetries"] = boost::any(*maxRetries);
    }
    if (maxRunTimeInSeconds) {
      res["maxRunTimeInSeconds"] = boost::any(*maxRunTimeInSeconds);
    }
    if (parameters) {
      res["parameters"] = boost::any(*parameters);
    }
    if (resourcePool) {
      res["resourcePool"] = boost::any(*resourcePool);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (script) {
      res["script"] = boost::any(*script);
    }
    if (sourceLogstore) {
      res["sourceLogstore"] = boost::any(*sourceLogstore);
    }
    if (sqlType) {
      res["sqlType"] = boost::any(*sqlType);
    }
    if (toTime) {
      res["toTime"] = boost::any(*toTime);
    }
    if (toTimeExpr) {
      res["toTimeExpr"] = boost::any(*toTimeExpr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataFormat") != m.end() && !m["dataFormat"].empty()) {
      dataFormat = make_shared<string>(boost::any_cast<string>(m["dataFormat"]));
    }
    if (m.find("destEndpoint") != m.end() && !m["destEndpoint"].empty()) {
      destEndpoint = make_shared<string>(boost::any_cast<string>(m["destEndpoint"]));
    }
    if (m.find("destLogstore") != m.end() && !m["destLogstore"].empty()) {
      destLogstore = make_shared<string>(boost::any_cast<string>(m["destLogstore"]));
    }
    if (m.find("destProject") != m.end() && !m["destProject"].empty()) {
      destProject = make_shared<string>(boost::any_cast<string>(m["destProject"]));
    }
    if (m.find("destRoleArn") != m.end() && !m["destRoleArn"].empty()) {
      destRoleArn = make_shared<string>(boost::any_cast<string>(m["destRoleArn"]));
    }
    if (m.find("fromTime") != m.end() && !m["fromTime"].empty()) {
      fromTime = make_shared<long>(boost::any_cast<long>(m["fromTime"]));
    }
    if (m.find("fromTimeExpr") != m.end() && !m["fromTimeExpr"].empty()) {
      fromTimeExpr = make_shared<string>(boost::any_cast<string>(m["fromTimeExpr"]));
    }
    if (m.find("maxRetries") != m.end() && !m["maxRetries"].empty()) {
      maxRetries = make_shared<long>(boost::any_cast<long>(m["maxRetries"]));
    }
    if (m.find("maxRunTimeInSeconds") != m.end() && !m["maxRunTimeInSeconds"].empty()) {
      maxRunTimeInSeconds = make_shared<long>(boost::any_cast<long>(m["maxRunTimeInSeconds"]));
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameters"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameters = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("resourcePool") != m.end() && !m["resourcePool"].empty()) {
      resourcePool = make_shared<string>(boost::any_cast<string>(m["resourcePool"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("script") != m.end() && !m["script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["script"]));
    }
    if (m.find("sourceLogstore") != m.end() && !m["sourceLogstore"].empty()) {
      sourceLogstore = make_shared<string>(boost::any_cast<string>(m["sourceLogstore"]));
    }
    if (m.find("sqlType") != m.end() && !m["sqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["sqlType"]));
    }
    if (m.find("toTime") != m.end() && !m["toTime"].empty()) {
      toTime = make_shared<long>(boost::any_cast<long>(m["toTime"]));
    }
    if (m.find("toTimeExpr") != m.end() && !m["toTimeExpr"].empty()) {
      toTimeExpr = make_shared<string>(boost::any_cast<string>(m["toTimeExpr"]));
    }
  }


  virtual ~ScheduledSQLConfiguration() = default;
};
class ScheduledSQL : public Darabonba::Model {
public:
  shared_ptr<ScheduledSQLConfiguration> configuration{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<Schedule> schedule{};
  shared_ptr<string> scheduleId{};
  shared_ptr<string> status{};

  ScheduledSQL() {}

  explicit ScheduledSQL(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (lastModifiedTime) {
      res["lastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleId) {
      res["scheduleId"] = boost::any(*scheduleId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        ScheduledSQLConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<ScheduledSQLConfiguration>(model1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("lastModifiedTime") != m.end() && !m["lastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["lastModifiedTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
    if (m.find("scheduleId") != m.end() && !m["scheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["scheduleId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ScheduledSQL() = default;
};
class StoreViewStore : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> query{};
  shared_ptr<string> storeName{};

  StoreViewStore() {}

  explicit StoreViewStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (storeName) {
      res["storeName"] = boost::any(*storeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("storeName") != m.end() && !m["storeName"].empty()) {
      storeName = make_shared<string>(boost::any_cast<string>(m["storeName"]));
    }
  }


  virtual ~StoreViewStore() = default;
};
class Ticket : public Darabonba::Model {
public:
  shared_ptr<long> callerUid{};
  shared_ptr<string> createDate{};
  shared_ptr<long> expirationTime{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> extra{};
  shared_ptr<string> name{};
  shared_ptr<long> number{};
  shared_ptr<string> sharingTo{};
  shared_ptr<string> ticket{};
  shared_ptr<string> ticketId{};
  shared_ptr<long> usedNumber{};
  shared_ptr<bool> valid{};

  Ticket() {}

  explicit Ticket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerUid) {
      res["callerUid"] = boost::any(*callerUid);
    }
    if (createDate) {
      res["createDate"] = boost::any(*createDate);
    }
    if (expirationTime) {
      res["expirationTime"] = boost::any(*expirationTime);
    }
    if (expireDate) {
      res["expireDate"] = boost::any(*expireDate);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (sharingTo) {
      res["sharingTo"] = boost::any(*sharingTo);
    }
    if (ticket) {
      res["ticket"] = boost::any(*ticket);
    }
    if (ticketId) {
      res["ticketId"] = boost::any(*ticketId);
    }
    if (usedNumber) {
      res["usedNumber"] = boost::any(*usedNumber);
    }
    if (valid) {
      res["valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("callerUid") != m.end() && !m["callerUid"].empty()) {
      callerUid = make_shared<long>(boost::any_cast<long>(m["callerUid"]));
    }
    if (m.find("createDate") != m.end() && !m["createDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["createDate"]));
    }
    if (m.find("expirationTime") != m.end() && !m["expirationTime"].empty()) {
      expirationTime = make_shared<long>(boost::any_cast<long>(m["expirationTime"]));
    }
    if (m.find("expireDate") != m.end() && !m["expireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["expireDate"]));
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["extra"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["number"]));
    }
    if (m.find("sharingTo") != m.end() && !m["sharingTo"].empty()) {
      sharingTo = make_shared<string>(boost::any_cast<string>(m["sharingTo"]));
    }
    if (m.find("ticket") != m.end() && !m["ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["ticket"]));
    }
    if (m.find("ticketId") != m.end() && !m["ticketId"].empty()) {
      ticketId = make_shared<string>(boost::any_cast<string>(m["ticketId"]));
    }
    if (m.find("usedNumber") != m.end() && !m["usedNumber"].empty()) {
      usedNumber = make_shared<long>(boost::any_cast<long>(m["usedNumber"]));
    }
    if (m.find("valid") != m.end() && !m["valid"].empty()) {
      valid = make_shared<bool>(boost::any_cast<bool>(m["valid"]));
    }
  }


  virtual ~Ticket() = default;
};
class Chart : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> action{};
  shared_ptr<map<string, boost::any>> display{};
  shared_ptr<map<string, boost::any>> search{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  Chart() {}

  explicit Chart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (search) {
      res["search"] = boost::any(*search);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["action"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      action = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("display") != m.end() && !m["display"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["display"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      display = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("search") != m.end() && !m["search"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["search"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      search = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~Chart() = default;
};
class Dashboard : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> attribute{};
  shared_ptr<vector<Chart>> charts{};
  shared_ptr<string> dashboardName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  Dashboard() {}

  explicit Dashboard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (charts) {
      vector<boost::any> temp1;
      for(auto item1:*charts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["charts"] = boost::any(temp1);
    }
    if (dashboardName) {
      res["dashboardName"] = boost::any(*dashboardName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["attribute"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attribute = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("charts") != m.end() && !m["charts"].empty()) {
      if (typeid(vector<boost::any>) == m["charts"].type()) {
        vector<Chart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["charts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Chart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        charts = make_shared<vector<Chart>>(expect1);
      }
    }
    if (m.find("dashboardName") != m.end() && !m["dashboardName"].empty()) {
      dashboardName = make_shared<string>(boost::any_cast<string>(m["dashboardName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~Dashboard() = default;
};
class EtlJobFunctionConfig : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> functionName{};
  shared_ptr<string> functionProvider{};
  shared_ptr<string> regionName{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> serviceName{};

  EtlJobFunctionConfig() {}

  explicit EtlJobFunctionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (functionProvider) {
      res["functionProvider"] = boost::any(*functionProvider);
    }
    if (regionName) {
      res["regionName"] = boost::any(*regionName);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("functionProvider") != m.end() && !m["functionProvider"].empty()) {
      functionProvider = make_shared<string>(boost::any_cast<string>(m["functionProvider"]));
    }
    if (m.find("regionName") != m.end() && !m["regionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["regionName"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~EtlJobFunctionConfig() = default;
};
class EtlJobLogConfig : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> logstoreName{};
  shared_ptr<string> projectName{};

  EtlJobLogConfig() {}

  explicit EtlJobLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
  }


  virtual ~EtlJobLogConfig() = default;
};
class EtlJobSourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> logstoreName{};

  EtlJobSourceConfig() {}

  explicit EtlJobSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
  }


  virtual ~EtlJobSourceConfig() = default;
};
class EtlJobTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<long> maxRetryTime{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> startingPosition{};
  shared_ptr<long> startingUnixtime{};
  shared_ptr<long> triggerInterval{};

  EtlJobTriggerConfig() {}

  explicit EtlJobTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRetryTime) {
      res["maxRetryTime"] = boost::any(*maxRetryTime);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (startingPosition) {
      res["startingPosition"] = boost::any(*startingPosition);
    }
    if (startingUnixtime) {
      res["startingUnixtime"] = boost::any(*startingUnixtime);
    }
    if (triggerInterval) {
      res["triggerInterval"] = boost::any(*triggerInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxRetryTime") != m.end() && !m["maxRetryTime"].empty()) {
      maxRetryTime = make_shared<long>(boost::any_cast<long>(m["maxRetryTime"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("startingPosition") != m.end() && !m["startingPosition"].empty()) {
      startingPosition = make_shared<string>(boost::any_cast<string>(m["startingPosition"]));
    }
    if (m.find("startingUnixtime") != m.end() && !m["startingUnixtime"].empty()) {
      startingUnixtime = make_shared<long>(boost::any_cast<long>(m["startingUnixtime"]));
    }
    if (m.find("triggerInterval") != m.end() && !m["triggerInterval"].empty()) {
      triggerInterval = make_shared<long>(boost::any_cast<long>(m["triggerInterval"]));
    }
  }


  virtual ~EtlJobTriggerConfig() = default;
};
class EtlJob : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> etlJobName{};
  shared_ptr<EtlJobFunctionConfig> functionConfig{};
  shared_ptr<map<string, boost::any>> functionParameter{};
  shared_ptr<EtlJobLogConfig> logConfig{};
  shared_ptr<EtlJobSourceConfig> sourceConfig{};
  shared_ptr<EtlJobTriggerConfig> triggerConfig{};

  EtlJob() {}

  explicit EtlJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (etlJobName) {
      res["etlJobName"] = boost::any(*etlJobName);
    }
    if (functionConfig) {
      res["functionConfig"] = functionConfig ? boost::any(functionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionParameter) {
      res["functionParameter"] = boost::any(*functionParameter);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceConfig) {
      res["sourceConfig"] = sourceConfig ? boost::any(sourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (triggerConfig) {
      res["triggerConfig"] = triggerConfig ? boost::any(triggerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("etlJobName") != m.end() && !m["etlJobName"].empty()) {
      etlJobName = make_shared<string>(boost::any_cast<string>(m["etlJobName"]));
    }
    if (m.find("functionConfig") != m.end() && !m["functionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["functionConfig"].type()) {
        EtlJobFunctionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["functionConfig"]));
        functionConfig = make_shared<EtlJobFunctionConfig>(model1);
      }
    }
    if (m.find("functionParameter") != m.end() && !m["functionParameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["functionParameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      functionParameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        EtlJobLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<EtlJobLogConfig>(model1);
      }
    }
    if (m.find("sourceConfig") != m.end() && !m["sourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceConfig"].type()) {
        EtlJobSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceConfig"]));
        sourceConfig = make_shared<EtlJobSourceConfig>(model1);
      }
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["triggerConfig"].type()) {
        EtlJobTriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["triggerConfig"]));
        triggerConfig = make_shared<EtlJobTriggerConfig>(model1);
      }
    }
  }


  virtual ~EtlJob() = default;
};
class EtlMeta : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> etlMetaKey{};
  shared_ptr<string> etlMetaName{};
  shared_ptr<string> etlMetaTag{};
  shared_ptr<string> etlMetaValue{};

  EtlMeta() {}

  explicit EtlMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (etlMetaKey) {
      res["etlMetaKey"] = boost::any(*etlMetaKey);
    }
    if (etlMetaName) {
      res["etlMetaName"] = boost::any(*etlMetaName);
    }
    if (etlMetaTag) {
      res["etlMetaTag"] = boost::any(*etlMetaTag);
    }
    if (etlMetaValue) {
      res["etlMetaValue"] = boost::any(*etlMetaValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("etlMetaKey") != m.end() && !m["etlMetaKey"].empty()) {
      etlMetaKey = make_shared<string>(boost::any_cast<string>(m["etlMetaKey"]));
    }
    if (m.find("etlMetaName") != m.end() && !m["etlMetaName"].empty()) {
      etlMetaName = make_shared<string>(boost::any_cast<string>(m["etlMetaName"]));
    }
    if (m.find("etlMetaTag") != m.end() && !m["etlMetaTag"].empty()) {
      etlMetaTag = make_shared<string>(boost::any_cast<string>(m["etlMetaTag"]));
    }
    if (m.find("etlMetaValue") != m.end() && !m["etlMetaValue"].empty()) {
      etlMetaValue = make_shared<string>(boost::any_cast<string>(m["etlMetaValue"]));
    }
  }


  virtual ~EtlMeta() = default;
};
class ExternalStore : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> storeType{};

  ExternalStore() {}

  explicit ExternalStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~ExternalStore() = default;
};
class IndexLine : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<vector<string>> excludeKeys{};
  shared_ptr<vector<string>> includeKeys{};
  shared_ptr<vector<string>> token{};

  IndexLine() {}

  explicit IndexLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (excludeKeys) {
      res["exclude_keys"] = boost::any(*excludeKeys);
    }
    if (includeKeys) {
      res["include_keys"] = boost::any(*includeKeys);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("exclude_keys") != m.end() && !m["exclude_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["exclude_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["exclude_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("include_keys") != m.end() && !m["include_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["include_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["include_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      includeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~IndexLine() = default;
};
class IndexKeysValue : public Darabonba::Model {
public:
  shared_ptr<bool> chn{};
  shared_ptr<bool> caseSensitive{};
  shared_ptr<vector<string>> token{};
  shared_ptr<string> alias{};
  shared_ptr<string> type{};
  shared_ptr<bool> docValue{};

  IndexKeysValue() {}

  explicit IndexKeysValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (docValue) {
      res["doc_value"] = boost::any(*docValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("doc_value") != m.end() && !m["doc_value"].empty()) {
      docValue = make_shared<bool>(boost::any_cast<bool>(m["doc_value"]));
    }
  }


  virtual ~IndexKeysValue() = default;
};
class Index : public Darabonba::Model {
public:
  shared_ptr<map<string, IndexKeysValue>> keys{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<IndexLine> line{};
  shared_ptr<bool> logReduce{};
  shared_ptr<vector<string>> logReduceBlackList{};
  shared_ptr<vector<string>> logReduceWhiteList{};
  shared_ptr<long> maxTextLen{};
  shared_ptr<long> ttl{};

  Index() {}

  explicit Index(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      map<string, boost::any> temp1;
      for(auto item1:*keys){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["keys"] = boost::any(temp1);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (line) {
      res["line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logReduce) {
      res["log_reduce"] = boost::any(*logReduce);
    }
    if (logReduceBlackList) {
      res["log_reduce_black_list"] = boost::any(*logReduceBlackList);
    }
    if (logReduceWhiteList) {
      res["log_reduce_white_list"] = boost::any(*logReduceWhiteList);
    }
    if (maxTextLen) {
      res["max_text_len"] = boost::any(*maxTextLen);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["keys"].type()) {
        map<string, IndexKeysValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["keys"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            IndexKeysValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        keys = make_shared<map<string, IndexKeysValue>>(expect1);
      }
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      if (typeid(map<string, boost::any>) == m["line"].type()) {
        IndexLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["line"]));
        line = make_shared<IndexLine>(model1);
      }
    }
    if (m.find("log_reduce") != m.end() && !m["log_reduce"].empty()) {
      logReduce = make_shared<bool>(boost::any_cast<bool>(m["log_reduce"]));
    }
    if (m.find("log_reduce_black_list") != m.end() && !m["log_reduce_black_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_black_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_black_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("log_reduce_white_list") != m.end() && !m["log_reduce_white_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_white_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_white_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("max_text_len") != m.end() && !m["max_text_len"].empty()) {
      maxTextLen = make_shared<long>(boost::any_cast<long>(m["max_text_len"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~Index() = default;
};
class LoggingLoggingDetails : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> type{};

  LoggingLoggingDetails() {}

  explicit LoggingLoggingDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~LoggingLoggingDetails() = default;
};
class Logging : public Darabonba::Model {
public:
  shared_ptr<vector<LoggingLoggingDetails>> loggingDetails{};
  shared_ptr<string> loggingProject{};

  Logging() {}

  explicit Logging(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loggingDetails) {
      vector<boost::any> temp1;
      for(auto item1:*loggingDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loggingDetails"] = boost::any(temp1);
    }
    if (loggingProject) {
      res["loggingProject"] = boost::any(*loggingProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("loggingDetails") != m.end() && !m["loggingDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["loggingDetails"].type()) {
        vector<LoggingLoggingDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loggingDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LoggingLoggingDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loggingDetails = make_shared<vector<LoggingLoggingDetails>>(expect1);
      }
    }
    if (m.find("loggingProject") != m.end() && !m["loggingProject"].empty()) {
      loggingProject = make_shared<string>(boost::any_cast<string>(m["loggingProject"]));
    }
  }


  virtual ~Logging() = default;
};
class Logstore : public Darabonba::Model {
public:
  shared_ptr<bool> appendMeta{};
  shared_ptr<bool> autoSplit{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> enableTracking{};
  shared_ptr<EncryptConf> encryptConf{};
  shared_ptr<long> hotTtl{};
  shared_ptr<long> infrequentAccessTTL{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> maxSplitShard{};
  shared_ptr<string> mode{};
  shared_ptr<string> productType{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> telemetryType{};
  shared_ptr<long> ttl{};

  Logstore() {}

  explicit Logstore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendMeta) {
      res["appendMeta"] = boost::any(*appendMeta);
    }
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (enableTracking) {
      res["enable_tracking"] = boost::any(*enableTracking);
    }
    if (encryptConf) {
      res["encrypt_conf"] = encryptConf ? boost::any(encryptConf->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hotTtl) {
      res["hot_ttl"] = boost::any(*hotTtl);
    }
    if (infrequentAccessTTL) {
      res["infrequentAccessTTL"] = boost::any(*infrequentAccessTTL);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (maxSplitShard) {
      res["maxSplitShard"] = boost::any(*maxSplitShard);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (shardCount) {
      res["shardCount"] = boost::any(*shardCount);
    }
    if (telemetryType) {
      res["telemetryType"] = boost::any(*telemetryType);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appendMeta") != m.end() && !m["appendMeta"].empty()) {
      appendMeta = make_shared<bool>(boost::any_cast<bool>(m["appendMeta"]));
    }
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<bool>(boost::any_cast<bool>(m["autoSplit"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("enable_tracking") != m.end() && !m["enable_tracking"].empty()) {
      enableTracking = make_shared<bool>(boost::any_cast<bool>(m["enable_tracking"]));
    }
    if (m.find("encrypt_conf") != m.end() && !m["encrypt_conf"].empty()) {
      if (typeid(map<string, boost::any>) == m["encrypt_conf"].type()) {
        EncryptConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encrypt_conf"]));
        encryptConf = make_shared<EncryptConf>(model1);
      }
    }
    if (m.find("hot_ttl") != m.end() && !m["hot_ttl"].empty()) {
      hotTtl = make_shared<long>(boost::any_cast<long>(m["hot_ttl"]));
    }
    if (m.find("infrequentAccessTTL") != m.end() && !m["infrequentAccessTTL"].empty()) {
      infrequentAccessTTL = make_shared<long>(boost::any_cast<long>(m["infrequentAccessTTL"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("maxSplitShard") != m.end() && !m["maxSplitShard"].empty()) {
      maxSplitShard = make_shared<long>(boost::any_cast<long>(m["maxSplitShard"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("shardCount") != m.end() && !m["shardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["shardCount"]));
    }
    if (m.find("telemetryType") != m.end() && !m["telemetryType"].empty()) {
      telemetryType = make_shared<string>(boost::any_cast<string>(m["telemetryType"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~Logstore() = default;
};
class Machine : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> lastHeartbeatTime{};
  shared_ptr<string> machineUniqueid{};
  shared_ptr<string> userdefinedId{};

  Machine() {}

  explicit Machine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (lastHeartbeatTime) {
      res["lastHeartbeatTime"] = boost::any(*lastHeartbeatTime);
    }
    if (machineUniqueid) {
      res["machine-uniqueid"] = boost::any(*machineUniqueid);
    }
    if (userdefinedId) {
      res["userdefined-id"] = boost::any(*userdefinedId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("lastHeartbeatTime") != m.end() && !m["lastHeartbeatTime"].empty()) {
      lastHeartbeatTime = make_shared<long>(boost::any_cast<long>(m["lastHeartbeatTime"]));
    }
    if (m.find("machine-uniqueid") != m.end() && !m["machine-uniqueid"].empty()) {
      machineUniqueid = make_shared<string>(boost::any_cast<string>(m["machine-uniqueid"]));
    }
    if (m.find("userdefined-id") != m.end() && !m["userdefined-id"].empty()) {
      userdefinedId = make_shared<string>(boost::any_cast<string>(m["userdefined-id"]));
    }
  }


  virtual ~Machine() = default;
};
class MachineGroupGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> externalName{};
  shared_ptr<string> groupTopic{};

  MachineGroupGroupAttribute() {}

  explicit MachineGroupGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalName) {
      res["externalName"] = boost::any(*externalName);
    }
    if (groupTopic) {
      res["groupTopic"] = boost::any(*groupTopic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalName") != m.end() && !m["externalName"].empty()) {
      externalName = make_shared<string>(boost::any_cast<string>(m["externalName"]));
    }
    if (m.find("groupTopic") != m.end() && !m["groupTopic"].empty()) {
      groupTopic = make_shared<string>(boost::any_cast<string>(m["groupTopic"]));
    }
  }


  virtual ~MachineGroupGroupAttribute() = default;
};
class MachineGroup : public Darabonba::Model {
public:
  shared_ptr<MachineGroupGroupAttribute> groupAttribute{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> machineIdentifyType{};
  shared_ptr<vector<string>> machineList{};

  MachineGroup() {}

  explicit MachineGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupAttribute) {
      res["groupAttribute"] = groupAttribute ? boost::any(groupAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (machineIdentifyType) {
      res["machineIdentifyType"] = boost::any(*machineIdentifyType);
    }
    if (machineList) {
      res["machineList"] = boost::any(*machineList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupAttribute") != m.end() && !m["groupAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupAttribute"].type()) {
        MachineGroupGroupAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupAttribute"]));
        groupAttribute = make_shared<MachineGroupGroupAttribute>(model1);
      }
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("machineIdentifyType") != m.end() && !m["machineIdentifyType"].empty()) {
      machineIdentifyType = make_shared<string>(boost::any_cast<string>(m["machineIdentifyType"]));
    }
    if (m.find("machineList") != m.end() && !m["machineList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machineList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machineList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machineList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~MachineGroup() = default;
};
class Project : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectName{};
  shared_ptr<map<string, boost::any>> quota{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};

  Project() {}

  explicit Project(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataRedundancyType) {
      res["dataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (quota) {
      res["quota"] = boost::any(*quota);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("dataRedundancyType") != m.end() && !m["dataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["dataRedundancyType"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["lastModifyTime"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("quota") != m.end() && !m["quota"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["quota"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      quota = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~Project() = default;
};
class ServiceStatus : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> status{};

  ServiceStatus() {}

  explicit ServiceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ServiceStatus() = default;
};
class Shard : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> exclusiveEndKey{};
  shared_ptr<string> inclusiveBeginKey{};
  shared_ptr<long> shardID{};
  shared_ptr<string> status{};

  Shard() {}

  explicit Shard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (exclusiveEndKey) {
      res["exclusiveEndKey"] = boost::any(*exclusiveEndKey);
    }
    if (inclusiveBeginKey) {
      res["inclusiveBeginKey"] = boost::any(*inclusiveBeginKey);
    }
    if (shardID) {
      res["shardID"] = boost::any(*shardID);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("exclusiveEndKey") != m.end() && !m["exclusiveEndKey"].empty()) {
      exclusiveEndKey = make_shared<string>(boost::any_cast<string>(m["exclusiveEndKey"]));
    }
    if (m.find("inclusiveBeginKey") != m.end() && !m["inclusiveBeginKey"].empty()) {
      inclusiveBeginKey = make_shared<string>(boost::any_cast<string>(m["inclusiveBeginKey"]));
    }
    if (m.find("shardID") != m.end() && !m["shardID"].empty()) {
      shardID = make_shared<long>(boost::any_cast<long>(m["shardID"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~Shard() = default;
};
class KeysValue : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<string> type{};
  shared_ptr<string> alias{};
  shared_ptr<vector<string>> token{};
  shared_ptr<bool> docValue{};

  KeysValue() {}

  explicit KeysValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    if (docValue) {
      res["doc_value"] = boost::any(*docValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
    if (m.find("doc_value") != m.end() && !m["doc_value"].empty()) {
      docValue = make_shared<bool>(boost::any_cast<bool>(m["doc_value"]));
    }
  }


  virtual ~KeysValue() = default;
};
class ApplyConfigToMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  ApplyConfigToMachineGroupResponse() {}

  explicit ApplyConfigToMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~ApplyConfigToMachineGroupResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class ConsumerGroupHeartBeatRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> body{};
  shared_ptr<string> consumer{};

  ConsumerGroupHeartBeatRequest() {}

  explicit ConsumerGroupHeartBeatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (consumer) {
      res["consumer"] = boost::any(*consumer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      body = make_shared<vector<long>>(toVec1);
    }
    if (m.find("consumer") != m.end() && !m["consumer"].empty()) {
      consumer = make_shared<string>(boost::any_cast<string>(m["consumer"]));
    }
  }


  virtual ~ConsumerGroupHeartBeatRequest() = default;
};
class ConsumerGroupHeartBeatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<long>> body{};

  ConsumerGroupHeartBeatResponse() {}

  explicit ConsumerGroupHeartBeatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      body = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~ConsumerGroupHeartBeatResponse() = default;
};
class ConsumerGroupUpdateCheckPointRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> checkpoint{};
  shared_ptr<long> shard{};

  ConsumerGroupUpdateCheckPointRequestBody() {}

  explicit ConsumerGroupUpdateCheckPointRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkpoint) {
      res["checkpoint"] = boost::any(*checkpoint);
    }
    if (shard) {
      res["shard"] = boost::any(*shard);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("checkpoint") != m.end() && !m["checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["checkpoint"]));
    }
    if (m.find("shard") != m.end() && !m["shard"].empty()) {
      shard = make_shared<long>(boost::any_cast<long>(m["shard"]));
    }
  }


  virtual ~ConsumerGroupUpdateCheckPointRequestBody() = default;
};
class ConsumerGroupUpdateCheckPointRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ConsumerGroupUpdateCheckPointRequestBody>> body{};
  shared_ptr<string> consumer{};
  shared_ptr<bool> forceSuccess{};

  ConsumerGroupUpdateCheckPointRequest() {}

  explicit ConsumerGroupUpdateCheckPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    if (consumer) {
      res["consumer"] = boost::any(*consumer);
    }
    if (forceSuccess) {
      res["forceSuccess"] = boost::any(*forceSuccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<ConsumerGroupUpdateCheckPointRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConsumerGroupUpdateCheckPointRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<ConsumerGroupUpdateCheckPointRequestBody>>(expect1);
      }
    }
    if (m.find("consumer") != m.end() && !m["consumer"].empty()) {
      consumer = make_shared<string>(boost::any_cast<string>(m["consumer"]));
    }
    if (m.find("forceSuccess") != m.end() && !m["forceSuccess"].empty()) {
      forceSuccess = make_shared<bool>(boost::any_cast<bool>(m["forceSuccess"]));
    }
  }


  virtual ~ConsumerGroupUpdateCheckPointRequest() = default;
};
class ConsumerGroupUpdateCheckPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  ConsumerGroupUpdateCheckPointResponse() {}

  explicit ConsumerGroupUpdateCheckPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~ConsumerGroupUpdateCheckPointResponse() = default;
};
class CreateAlertRequest : public Darabonba::Model {
public:
  shared_ptr<AlertConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<Schedule> schedule{};

  CreateAlertRequest() {}

  explicit CreateAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        AlertConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<AlertConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
  }


  virtual ~CreateAlertRequest() = default;
};
class CreateAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateAlertResponse() {}

  explicit CreateAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateAlertResponse() = default;
};
class CreateAnnotationDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<MLDataSetParam> body{};
  shared_ptr<string> datasetId{};

  CreateAnnotationDataSetRequest() {}

  explicit CreateAnnotationDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasetId) {
      res["datasetId"] = boost::any(*datasetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLDataSetParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLDataSetParam>(model1);
      }
    }
    if (m.find("datasetId") != m.end() && !m["datasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["datasetId"]));
    }
  }


  virtual ~CreateAnnotationDataSetRequest() = default;
};
class CreateAnnotationDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateAnnotationDataSetResponse() {}

  explicit CreateAnnotationDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateAnnotationDataSetResponse() = default;
};
class CreateAnnotationLabelRequest : public Darabonba::Model {
public:
  shared_ptr<MLLabelParam> body{};

  CreateAnnotationLabelRequest() {}

  explicit CreateAnnotationLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLLabelParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLLabelParam>(model1);
      }
    }
  }


  virtual ~CreateAnnotationLabelRequest() = default;
};
class CreateAnnotationLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateAnnotationLabelResponse() {}

  explicit CreateAnnotationLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateAnnotationLabelResponse() = default;
};
class CreateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<LogtailConfig> body{};

  CreateConfigRequest() {}

  explicit CreateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LogtailConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogtailConfig>(model1);
      }
    }
  }


  virtual ~CreateConfigRequest() = default;
};
class CreateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateConfigResponse() {}

  explicit CreateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateConfigResponse() = default;
};
class CreateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<bool> order{};
  shared_ptr<long> timeout{};

  CreateConsumerGroupRequest() {}

  explicit CreateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["consumerGroup"] = boost::any(*consumerGroup);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroup") != m.end() && !m["consumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["consumerGroup"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<bool>(boost::any_cast<bool>(m["order"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~CreateConsumerGroupRequest() = default;
};
class CreateConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateConsumerGroupResponse() {}

  explicit CreateConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateConsumerGroupResponse() = default;
};
class CreateDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<Dashboard> body{};

  CreateDashboardRequest() {}

  explicit CreateDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Dashboard model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Dashboard>(model1);
      }
    }
  }


  virtual ~CreateDashboardRequest() = default;
};
class CreateDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateDashboardResponse() {}

  explicit CreateDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateDashboardResponse() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateDomainResponse() {}

  explicit CreateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateDomainResponse() = default;
};
class CreateETLRequest : public Darabonba::Model {
public:
  shared_ptr<ETLConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};

  CreateETLRequest() {}

  explicit CreateETLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        ETLConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<ETLConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateETLRequest() = default;
};
class CreateETLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateETLResponse() {}

  explicit CreateETLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateETLResponse() = default;
};
class CreateIndexRequestLine : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<vector<string>> excludeKeys{};
  shared_ptr<vector<string>> includeKeys{};
  shared_ptr<vector<string>> token{};

  CreateIndexRequestLine() {}

  explicit CreateIndexRequestLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (excludeKeys) {
      res["exclude_keys"] = boost::any(*excludeKeys);
    }
    if (includeKeys) {
      res["include_keys"] = boost::any(*includeKeys);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("exclude_keys") != m.end() && !m["exclude_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["exclude_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["exclude_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("include_keys") != m.end() && !m["include_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["include_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["include_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      includeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateIndexRequestLine() = default;
};
class CreateIndexRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, KeysValue>> keys{};
  shared_ptr<CreateIndexRequestLine> line{};
  shared_ptr<bool> logReduce{};
  shared_ptr<vector<string>> logReduceBlackList{};
  shared_ptr<vector<string>> logReduceWhiteList{};
  shared_ptr<long> maxTextLen{};
  shared_ptr<long> ttl{};

  CreateIndexRequest() {}

  explicit CreateIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      map<string, boost::any> temp1;
      for(auto item1:*keys){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["keys"] = boost::any(temp1);
    }
    if (line) {
      res["line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logReduce) {
      res["log_reduce"] = boost::any(*logReduce);
    }
    if (logReduceBlackList) {
      res["log_reduce_black_list"] = boost::any(*logReduceBlackList);
    }
    if (logReduceWhiteList) {
      res["log_reduce_white_list"] = boost::any(*logReduceWhiteList);
    }
    if (maxTextLen) {
      res["max_text_len"] = boost::any(*maxTextLen);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["keys"].type()) {
        map<string, KeysValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["keys"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            KeysValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        keys = make_shared<map<string, KeysValue>>(expect1);
      }
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      if (typeid(map<string, boost::any>) == m["line"].type()) {
        CreateIndexRequestLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["line"]));
        line = make_shared<CreateIndexRequestLine>(model1);
      }
    }
    if (m.find("log_reduce") != m.end() && !m["log_reduce"].empty()) {
      logReduce = make_shared<bool>(boost::any_cast<bool>(m["log_reduce"]));
    }
    if (m.find("log_reduce_black_list") != m.end() && !m["log_reduce_black_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_black_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_black_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("log_reduce_white_list") != m.end() && !m["log_reduce_white_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_white_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_white_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("max_text_len") != m.end() && !m["max_text_len"].empty()) {
      maxTextLen = make_shared<long>(boost::any_cast<long>(m["max_text_len"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~CreateIndexRequest() = default;
};
class CreateIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateIndexResponse() {}

  explicit CreateIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateIndexResponse() = default;
};
class CreateLogStoreRequest : public Darabonba::Model {
public:
  shared_ptr<bool> appendMeta{};
  shared_ptr<bool> autoSplit{};
  shared_ptr<bool> enableTracking{};
  shared_ptr<EncryptConf> encryptConf{};
  shared_ptr<long> hotTtl{};
  shared_ptr<long> infrequentAccessTTL{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> maxSplitShard{};
  shared_ptr<string> mode{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> telemetryType{};
  shared_ptr<long> ttl{};

  CreateLogStoreRequest() {}

  explicit CreateLogStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendMeta) {
      res["appendMeta"] = boost::any(*appendMeta);
    }
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (enableTracking) {
      res["enable_tracking"] = boost::any(*enableTracking);
    }
    if (encryptConf) {
      res["encrypt_conf"] = encryptConf ? boost::any(encryptConf->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hotTtl) {
      res["hot_ttl"] = boost::any(*hotTtl);
    }
    if (infrequentAccessTTL) {
      res["infrequentAccessTTL"] = boost::any(*infrequentAccessTTL);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (maxSplitShard) {
      res["maxSplitShard"] = boost::any(*maxSplitShard);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (shardCount) {
      res["shardCount"] = boost::any(*shardCount);
    }
    if (telemetryType) {
      res["telemetryType"] = boost::any(*telemetryType);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appendMeta") != m.end() && !m["appendMeta"].empty()) {
      appendMeta = make_shared<bool>(boost::any_cast<bool>(m["appendMeta"]));
    }
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<bool>(boost::any_cast<bool>(m["autoSplit"]));
    }
    if (m.find("enable_tracking") != m.end() && !m["enable_tracking"].empty()) {
      enableTracking = make_shared<bool>(boost::any_cast<bool>(m["enable_tracking"]));
    }
    if (m.find("encrypt_conf") != m.end() && !m["encrypt_conf"].empty()) {
      if (typeid(map<string, boost::any>) == m["encrypt_conf"].type()) {
        EncryptConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encrypt_conf"]));
        encryptConf = make_shared<EncryptConf>(model1);
      }
    }
    if (m.find("hot_ttl") != m.end() && !m["hot_ttl"].empty()) {
      hotTtl = make_shared<long>(boost::any_cast<long>(m["hot_ttl"]));
    }
    if (m.find("infrequentAccessTTL") != m.end() && !m["infrequentAccessTTL"].empty()) {
      infrequentAccessTTL = make_shared<long>(boost::any_cast<long>(m["infrequentAccessTTL"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("maxSplitShard") != m.end() && !m["maxSplitShard"].empty()) {
      maxSplitShard = make_shared<long>(boost::any_cast<long>(m["maxSplitShard"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("shardCount") != m.end() && !m["shardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["shardCount"]));
    }
    if (m.find("telemetryType") != m.end() && !m["telemetryType"].empty()) {
      telemetryType = make_shared<string>(boost::any_cast<string>(m["telemetryType"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~CreateLogStoreRequest() = default;
};
class CreateLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateLogStoreResponse() {}

  explicit CreateLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateLogStoreResponse() = default;
};
class CreateLoggingRequestLoggingDetails : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> type{};

  CreateLoggingRequestLoggingDetails() {}

  explicit CreateLoggingRequestLoggingDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateLoggingRequestLoggingDetails() = default;
};
class CreateLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateLoggingRequestLoggingDetails>> loggingDetails{};
  shared_ptr<string> loggingProject{};

  CreateLoggingRequest() {}

  explicit CreateLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loggingDetails) {
      vector<boost::any> temp1;
      for(auto item1:*loggingDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loggingDetails"] = boost::any(temp1);
    }
    if (loggingProject) {
      res["loggingProject"] = boost::any(*loggingProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("loggingDetails") != m.end() && !m["loggingDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["loggingDetails"].type()) {
        vector<CreateLoggingRequestLoggingDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loggingDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLoggingRequestLoggingDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loggingDetails = make_shared<vector<CreateLoggingRequestLoggingDetails>>(expect1);
      }
    }
    if (m.find("loggingProject") != m.end() && !m["loggingProject"].empty()) {
      loggingProject = make_shared<string>(boost::any_cast<string>(m["loggingProject"]));
    }
  }


  virtual ~CreateLoggingRequest() = default;
};
class CreateLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateLoggingResponse() {}

  explicit CreateLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateLoggingResponse() = default;
};
class CreateLogtailPipelineConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> aggregators{};
  shared_ptr<string> configName{};
  shared_ptr<vector<map<string, boost::any>>> flushers{};
  shared_ptr<map<string, boost::any>> global{};
  shared_ptr<vector<map<string, boost::any>>> inputs{};
  shared_ptr<string> logSample{};
  shared_ptr<vector<map<string, boost::any>>> processors{};

  CreateLogtailPipelineConfigRequest() {}

  explicit CreateLogtailPipelineConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregators) {
      res["aggregators"] = boost::any(*aggregators);
    }
    if (configName) {
      res["configName"] = boost::any(*configName);
    }
    if (flushers) {
      res["flushers"] = boost::any(*flushers);
    }
    if (global) {
      res["global"] = boost::any(*global);
    }
    if (inputs) {
      res["inputs"] = boost::any(*inputs);
    }
    if (logSample) {
      res["logSample"] = boost::any(*logSample);
    }
    if (processors) {
      res["processors"] = boost::any(*processors);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aggregators") != m.end() && !m["aggregators"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["aggregators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["aggregators"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      aggregators = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("configName") != m.end() && !m["configName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["configName"]));
    }
    if (m.find("flushers") != m.end() && !m["flushers"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["flushers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["flushers"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      flushers = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("global") != m.end() && !m["global"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["global"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      global = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("inputs") != m.end() && !m["inputs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["inputs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["inputs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      inputs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("logSample") != m.end() && !m["logSample"].empty()) {
      logSample = make_shared<string>(boost::any_cast<string>(m["logSample"]));
    }
    if (m.find("processors") != m.end() && !m["processors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["processors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["processors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      processors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~CreateLogtailPipelineConfigRequest() = default;
};
class CreateLogtailPipelineConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateLogtailPipelineConfigResponse() {}

  explicit CreateLogtailPipelineConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateLogtailPipelineConfigResponse() = default;
};
class CreateMachineGroupRequestGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> externalName{};
  shared_ptr<string> groupTopic{};

  CreateMachineGroupRequestGroupAttribute() {}

  explicit CreateMachineGroupRequestGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalName) {
      res["externalName"] = boost::any(*externalName);
    }
    if (groupTopic) {
      res["groupTopic"] = boost::any(*groupTopic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalName") != m.end() && !m["externalName"].empty()) {
      externalName = make_shared<string>(boost::any_cast<string>(m["externalName"]));
    }
    if (m.find("groupTopic") != m.end() && !m["groupTopic"].empty()) {
      groupTopic = make_shared<string>(boost::any_cast<string>(m["groupTopic"]));
    }
  }


  virtual ~CreateMachineGroupRequestGroupAttribute() = default;
};
class CreateMachineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<CreateMachineGroupRequestGroupAttribute> groupAttribute{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> machineIdentifyType{};
  shared_ptr<vector<string>> machineList{};

  CreateMachineGroupRequest() {}

  explicit CreateMachineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupAttribute) {
      res["groupAttribute"] = groupAttribute ? boost::any(groupAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (machineIdentifyType) {
      res["machineIdentifyType"] = boost::any(*machineIdentifyType);
    }
    if (machineList) {
      res["machineList"] = boost::any(*machineList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupAttribute") != m.end() && !m["groupAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupAttribute"].type()) {
        CreateMachineGroupRequestGroupAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupAttribute"]));
        groupAttribute = make_shared<CreateMachineGroupRequestGroupAttribute>(model1);
      }
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("machineIdentifyType") != m.end() && !m["machineIdentifyType"].empty()) {
      machineIdentifyType = make_shared<string>(boost::any_cast<string>(m["machineIdentifyType"]));
    }
    if (m.find("machineList") != m.end() && !m["machineList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machineList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machineList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machineList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateMachineGroupRequest() = default;
};
class CreateMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateMachineGroupResponse() {}

  explicit CreateMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateMachineGroupResponse() = default;
};
class CreateOSSExportRequest : public Darabonba::Model {
public:
  shared_ptr<OSSExportConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};

  CreateOSSExportRequest() {}

  explicit CreateOSSExportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        OSSExportConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<OSSExportConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateOSSExportRequest() = default;
};
class CreateOSSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateOSSExportResponse() {}

  explicit CreateOSSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateOSSExportResponse() = default;
};
class CreateOSSHDFSExportRequest : public Darabonba::Model {
public:
  shared_ptr<OSSExportConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};

  CreateOSSHDFSExportRequest() {}

  explicit CreateOSSHDFSExportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        OSSExportConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<OSSExportConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateOSSHDFSExportRequest() = default;
};
class CreateOSSHDFSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateOSSHDFSExportResponse() {}

  explicit CreateOSSHDFSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateOSSHDFSExportResponse() = default;
};
class CreateOSSIngestionRequest : public Darabonba::Model {
public:
  shared_ptr<OSSIngestionConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<Schedule> schedule{};

  CreateOSSIngestionRequest() {}

  explicit CreateOSSIngestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        OSSIngestionConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<OSSIngestionConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
  }


  virtual ~CreateOSSIngestionRequest() = default;
};
class CreateOSSIngestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateOSSIngestionResponse() {}

  explicit CreateOSSIngestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateOSSIngestionResponse() = default;
};
class CreateOssExternalStoreRequestParameterColumns : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateOssExternalStoreRequestParameterColumns() {}

  explicit CreateOssExternalStoreRequestParameterColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateOssExternalStoreRequestParameterColumns() = default;
};
class CreateOssExternalStoreRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> accessid{};
  shared_ptr<string> accesskey{};
  shared_ptr<string> bucket{};
  shared_ptr<vector<CreateOssExternalStoreRequestParameterColumns>> columns{};
  shared_ptr<string> endpoint{};
  shared_ptr<vector<string>> objects{};

  CreateOssExternalStoreRequestParameter() {}

  explicit CreateOssExternalStoreRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessid) {
      res["accessid"] = boost::any(*accessid);
    }
    if (accesskey) {
      res["accesskey"] = boost::any(*accesskey);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columns"] = boost::any(temp1);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (objects) {
      res["objects"] = boost::any(*objects);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessid") != m.end() && !m["accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["accessid"]));
    }
    if (m.find("accesskey") != m.end() && !m["accesskey"].empty()) {
      accesskey = make_shared<string>(boost::any_cast<string>(m["accesskey"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<CreateOssExternalStoreRequestParameterColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateOssExternalStoreRequestParameterColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<CreateOssExternalStoreRequestParameterColumns>>(expect1);
      }
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("objects") != m.end() && !m["objects"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["objects"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["objects"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objects = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateOssExternalStoreRequestParameter() = default;
};
class CreateOssExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<CreateOssExternalStoreRequestParameter> parameter{};
  shared_ptr<string> storeType{};

  CreateOssExternalStoreRequest() {}

  explicit CreateOssExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        CreateOssExternalStoreRequestParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<CreateOssExternalStoreRequestParameter>(model1);
      }
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~CreateOssExternalStoreRequest() = default;
};
class CreateOssExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateOssExternalStoreResponse() {}

  explicit CreateOssExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateOssExternalStoreResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataRedundancyType{};
  shared_ptr<string> description{};
  shared_ptr<string> projectName{};
  shared_ptr<string> resourceGroupId{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataRedundancyType) {
      res["dataRedundancyType"] = boost::any(*dataRedundancyType);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataRedundancyType") != m.end() && !m["dataRedundancyType"].empty()) {
      dataRedundancyType = make_shared<string>(boost::any_cast<string>(m["dataRedundancyType"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateRdsExternalStoreRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> db{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> password{};
  shared_ptr<string> port{};
  shared_ptr<string> region{};
  shared_ptr<string> table{};
  shared_ptr<string> username{};
  shared_ptr<string> vpcId{};

  CreateRdsExternalStoreRequestParameter() {}

  explicit CreateRdsExternalStoreRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (db) {
      res["db"] = boost::any(*db);
    }
    if (host) {
      res["host"] = boost::any(*host);
    }
    if (instanceId) {
      res["instance-id"] = boost::any(*instanceId);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vpcId) {
      res["vpc-id"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("db") != m.end() && !m["db"].empty()) {
      db = make_shared<string>(boost::any_cast<string>(m["db"]));
    }
    if (m.find("host") != m.end() && !m["host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["host"]));
    }
    if (m.find("instance-id") != m.end() && !m["instance-id"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instance-id"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["port"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vpc-id") != m.end() && !m["vpc-id"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpc-id"]));
    }
  }


  virtual ~CreateRdsExternalStoreRequestParameter() = default;
};
class CreateRdsExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<CreateRdsExternalStoreRequestParameter> parameter{};
  shared_ptr<string> storeType{};

  CreateRdsExternalStoreRequest() {}

  explicit CreateRdsExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        CreateRdsExternalStoreRequestParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<CreateRdsExternalStoreRequestParameter>(model1);
      }
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~CreateRdsExternalStoreRequest() = default;
};
class CreateRdsExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateRdsExternalStoreResponse() {}

  explicit CreateRdsExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateRdsExternalStoreResponse() = default;
};
class CreateSavedSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> logstore{};
  shared_ptr<string> savedsearchName{};
  shared_ptr<string> searchQuery{};
  shared_ptr<string> topic{};

  CreateSavedSearchRequest() {}

  explicit CreateSavedSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (savedsearchName) {
      res["savedsearchName"] = boost::any(*savedsearchName);
    }
    if (searchQuery) {
      res["searchQuery"] = boost::any(*searchQuery);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("savedsearchName") != m.end() && !m["savedsearchName"].empty()) {
      savedsearchName = make_shared<string>(boost::any_cast<string>(m["savedsearchName"]));
    }
    if (m.find("searchQuery") != m.end() && !m["searchQuery"].empty()) {
      searchQuery = make_shared<string>(boost::any_cast<string>(m["searchQuery"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~CreateSavedSearchRequest() = default;
};
class CreateSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateSavedSearchResponse() {}

  explicit CreateSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateSavedSearchResponse() = default;
};
class CreateScheduledSQLRequest : public Darabonba::Model {
public:
  shared_ptr<ScheduledSQLConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<Schedule> schedule{};

  CreateScheduledSQLRequest() {}

  explicit CreateScheduledSQLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        ScheduledSQLConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<ScheduledSQLConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
  }


  virtual ~CreateScheduledSQLRequest() = default;
};
class CreateScheduledSQLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateScheduledSQLResponse() {}

  explicit CreateScheduledSQLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateScheduledSQLResponse() = default;
};
class CreateSqlInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> cu{};
  shared_ptr<bool> useAsDefault{};

  CreateSqlInstanceRequest() {}

  explicit CreateSqlInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (useAsDefault) {
      res["useAsDefault"] = boost::any(*useAsDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("useAsDefault") != m.end() && !m["useAsDefault"].empty()) {
      useAsDefault = make_shared<bool>(boost::any_cast<bool>(m["useAsDefault"]));
    }
  }


  virtual ~CreateSqlInstanceRequest() = default;
};
class CreateSqlInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateSqlInstanceResponse() {}

  explicit CreateSqlInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateSqlInstanceResponse() = default;
};
class CreateStoreViewRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> storeType{};
  shared_ptr<vector<StoreViewStore>> stores{};

  CreateStoreViewRequest() {}

  explicit CreateStoreViewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    if (stores) {
      vector<boost::any> temp1;
      for(auto item1:*stores){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stores"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
    if (m.find("stores") != m.end() && !m["stores"].empty()) {
      if (typeid(vector<boost::any>) == m["stores"].type()) {
        vector<StoreViewStore> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stores"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StoreViewStore model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stores = make_shared<vector<StoreViewStore>>(expect1);
      }
    }
  }


  virtual ~CreateStoreViewRequest() = default;
};
class CreateStoreViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateStoreViewResponse() {}

  explicit CreateStoreViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~CreateStoreViewResponse() = default;
};
class CreateTicketRequest : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenExpirationTime{};
  shared_ptr<long> expirationTime{};

  CreateTicketRequest() {}

  explicit CreateTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenExpirationTime) {
      res["accessTokenExpirationTime"] = boost::any(*accessTokenExpirationTime);
    }
    if (expirationTime) {
      res["expirationTime"] = boost::any(*expirationTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessTokenExpirationTime") != m.end() && !m["accessTokenExpirationTime"].empty()) {
      accessTokenExpirationTime = make_shared<long>(boost::any_cast<long>(m["accessTokenExpirationTime"]));
    }
    if (m.find("expirationTime") != m.end() && !m["expirationTime"].empty()) {
      expirationTime = make_shared<long>(boost::any_cast<long>(m["expirationTime"]));
    }
  }


  virtual ~CreateTicketRequest() = default;
};
class CreateTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ticket{};

  CreateTicketResponseBody() {}

  explicit CreateTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticket) {
      res["ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ticket") != m.end() && !m["ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["ticket"]));
    }
  }


  virtual ~CreateTicketResponseBody() = default;
};
class CreateTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTicketResponseBody> body{};

  CreateTicketResponse() {}

  explicit CreateTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTicketResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTicketResponse() = default;
};
class DeleteAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteAlertResponse() {}

  explicit DeleteAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteAlertResponse() = default;
};
class DeleteAnnotationDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteAnnotationDataResponse() {}

  explicit DeleteAnnotationDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteAnnotationDataResponse() = default;
};
class DeleteAnnotationDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteAnnotationDataSetResponse() {}

  explicit DeleteAnnotationDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteAnnotationDataSetResponse() = default;
};
class DeleteAnnotationLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteAnnotationLabelResponse() {}

  explicit DeleteAnnotationLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteAnnotationLabelResponse() = default;
};
class DeleteCollectionPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataCode{};
  shared_ptr<string> productCode{};

  DeleteCollectionPolicyRequest() {}

  explicit DeleteCollectionPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCode) {
      res["dataCode"] = boost::any(*dataCode);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataCode") != m.end() && !m["dataCode"].empty()) {
      dataCode = make_shared<string>(boost::any_cast<string>(m["dataCode"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
  }


  virtual ~DeleteCollectionPolicyRequest() = default;
};
class DeleteCollectionPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};

  DeleteCollectionPolicyResponseBody() {}

  explicit DeleteCollectionPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~DeleteCollectionPolicyResponseBody() = default;
};
class DeleteCollectionPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCollectionPolicyResponseBody> body{};

  DeleteCollectionPolicyResponse() {}

  explicit DeleteCollectionPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCollectionPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCollectionPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCollectionPolicyResponse() = default;
};
class DeleteConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteConfigResponse() {}

  explicit DeleteConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteConfigResponse() = default;
};
class DeleteConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteConsumerGroupResponse() {}

  explicit DeleteConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteConsumerGroupResponse() = default;
};
class DeleteDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteDashboardResponse() {}

  explicit DeleteDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteDashboardResponse() = default;
};
class DeleteDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteETLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteETLResponse() {}

  explicit DeleteETLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteETLResponse() = default;
};
class DeleteExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteExternalStoreResponse() {}

  explicit DeleteExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteExternalStoreResponse() = default;
};
class DeleteIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteIndexResponse() {}

  explicit DeleteIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteIndexResponse() = default;
};
class DeleteLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteLogStoreResponse() {}

  explicit DeleteLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteLogStoreResponse() = default;
};
class DeleteLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteLoggingResponse() {}

  explicit DeleteLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteLoggingResponse() = default;
};
class DeleteLogtailPipelineConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteLogtailPipelineConfigResponse() {}

  explicit DeleteLogtailPipelineConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteLogtailPipelineConfigResponse() = default;
};
class DeleteMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteMachineGroupResponse() {}

  explicit DeleteMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteMachineGroupResponse() = default;
};
class DeleteOSSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteOSSExportResponse() {}

  explicit DeleteOSSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteOSSExportResponse() = default;
};
class DeleteOSSHDFSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteOSSHDFSExportResponse() {}

  explicit DeleteOSSHDFSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteOSSHDFSExportResponse() = default;
};
class DeleteOSSIngestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteOSSIngestionResponse() {}

  explicit DeleteOSSIngestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteOSSIngestionResponse() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteProjectResponse() = default;
};
class DeleteProjectPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteProjectPolicyResponse() {}

  explicit DeleteProjectPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteProjectPolicyResponse() = default;
};
class DeleteSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteSavedSearchResponse() {}

  explicit DeleteSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteSavedSearchResponse() = default;
};
class DeleteScheduledSQLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteScheduledSQLResponse() {}

  explicit DeleteScheduledSQLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteScheduledSQLResponse() = default;
};
class DeleteShipperResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteShipperResponse() {}

  explicit DeleteShipperResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteShipperResponse() = default;
};
class DeleteStoreViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteStoreViewResponse() {}

  explicit DeleteStoreViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DeleteStoreViewResponse() = default;
};
class DisableAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DisableAlertResponse() {}

  explicit DisableAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DisableAlertResponse() = default;
};
class DisableScheduledSQLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DisableScheduledSQLResponse() {}

  explicit DisableScheduledSQLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~DisableScheduledSQLResponse() = default;
};
class EnableAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  EnableAlertResponse() {}

  explicit EnableAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~EnableAlertResponse() = default;
};
class EnableScheduledSQLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  EnableScheduledSQLResponse() {}

  explicit EnableScheduledSQLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~EnableScheduledSQLResponse() = default;
};
class GetAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Alert> body{};

  GetAlertResponse() {}

  explicit GetAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Alert model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Alert>(model1);
      }
    }
  }


  virtual ~GetAlertResponse() = default;
};
class GetAnnotationDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MLDataParam> body{};

  GetAnnotationDataResponse() {}

  explicit GetAnnotationDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLDataParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLDataParam>(model1);
      }
    }
  }


  virtual ~GetAnnotationDataResponse() = default;
};
class GetAnnotationDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MLDataSetParam> body{};

  GetAnnotationDataSetResponse() {}

  explicit GetAnnotationDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLDataSetParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLDataSetParam>(model1);
      }
    }
  }


  virtual ~GetAnnotationDataSetResponse() = default;
};
class GetAnnotationLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MLLabelParam> body{};

  GetAnnotationLabelResponse() {}

  explicit GetAnnotationLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLLabelParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLLabelParam>(model1);
      }
    }
  }


  virtual ~GetAnnotationLabelResponse() = default;
};
class GetAppliedConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> configs{};
  shared_ptr<long> count{};

  GetAppliedConfigsResponseBody() {}

  explicit GetAppliedConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      res["configs"] = boost::any(*configs);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configs") != m.end() && !m["configs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["configs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["configs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      configs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
  }


  virtual ~GetAppliedConfigsResponseBody() = default;
};
class GetAppliedConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppliedConfigsResponseBody> body{};

  GetAppliedConfigsResponse() {}

  explicit GetAppliedConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAppliedConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppliedConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppliedConfigsResponse() = default;
};
class GetAppliedMachineGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> machinegroups{};

  GetAppliedMachineGroupsResponseBody() {}

  explicit GetAppliedMachineGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (machinegroups) {
      res["machinegroups"] = boost::any(*machinegroups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("machinegroups") != m.end() && !m["machinegroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machinegroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machinegroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machinegroups = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetAppliedMachineGroupsResponseBody() = default;
};
class GetAppliedMachineGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppliedMachineGroupsResponseBody> body{};

  GetAppliedMachineGroupsResponse() {}

  explicit GetAppliedMachineGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAppliedMachineGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppliedMachineGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppliedMachineGroupsResponse() = default;
};
class GetCheckPointRequest : public Darabonba::Model {
public:
  shared_ptr<long> shard{};

  GetCheckPointRequest() {}

  explicit GetCheckPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shard) {
      res["shard"] = boost::any(*shard);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shard") != m.end() && !m["shard"].empty()) {
      shard = make_shared<long>(boost::any_cast<long>(m["shard"]));
    }
  }


  virtual ~GetCheckPointRequest() = default;
};
class GetCheckPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> shard{};
  shared_ptr<string> checkpoint{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> consumer{};

  GetCheckPointResponseBody() {}

  explicit GetCheckPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shard) {
      res["shard"] = boost::any(*shard);
    }
    if (checkpoint) {
      res["checkpoint"] = boost::any(*checkpoint);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (consumer) {
      res["consumer"] = boost::any(*consumer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shard") != m.end() && !m["shard"].empty()) {
      shard = make_shared<long>(boost::any_cast<long>(m["shard"]));
    }
    if (m.find("checkpoint") != m.end() && !m["checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["checkpoint"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("consumer") != m.end() && !m["consumer"].empty()) {
      consumer = make_shared<string>(boost::any_cast<string>(m["consumer"]));
    }
  }


  virtual ~GetCheckPointResponseBody() = default;
};
class GetCheckPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<GetCheckPointResponseBody>> body{};

  GetCheckPointResponse() {}

  explicit GetCheckPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<GetCheckPointResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCheckPointResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<GetCheckPointResponseBody>>(expect1);
      }
    }
  }


  virtual ~GetCheckPointResponse() = default;
};
class GetCollectionPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataCode{};
  shared_ptr<string> productCode{};

  GetCollectionPolicyRequest() {}

  explicit GetCollectionPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataCode) {
      res["dataCode"] = boost::any(*dataCode);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataCode") != m.end() && !m["dataCode"].empty()) {
      dataCode = make_shared<string>(boost::any_cast<string>(m["dataCode"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
  }


  virtual ~GetCollectionPolicyRequest() = default;
};
class GetCollectionPolicyResponseBodyCollectionPolicyAttribute : public Darabonba::Model {
public:
  shared_ptr<string> app{};
  shared_ptr<string> policyGroup{};

  GetCollectionPolicyResponseBodyCollectionPolicyAttribute() {}

  explicit GetCollectionPolicyResponseBodyCollectionPolicyAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["app"] = boost::any(*app);
    }
    if (policyGroup) {
      res["policyGroup"] = boost::any(*policyGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("app") != m.end() && !m["app"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["app"]));
    }
    if (m.find("policyGroup") != m.end() && !m["policyGroup"].empty()) {
      policyGroup = make_shared<string>(boost::any_cast<string>(m["policyGroup"]));
    }
  }


  virtual ~GetCollectionPolicyResponseBodyCollectionPolicyAttribute() = default;
};
class GetCollectionPolicyResponseBodyCollectionPolicyCentralizeConfig : public Darabonba::Model {
public:
  shared_ptr<string> destLogstore{};
  shared_ptr<string> destProject{};
  shared_ptr<string> destRegion{};
  shared_ptr<long> destTTL{};

  GetCollectionPolicyResponseBodyCollectionPolicyCentralizeConfig() {}

  explicit GetCollectionPolicyResponseBodyCollectionPolicyCentralizeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destLogstore) {
      res["destLogstore"] = boost::any(*destLogstore);
    }
    if (destProject) {
      res["destProject"] = boost::any(*destProject);
    }
    if (destRegion) {
      res["destRegion"] = boost::any(*destRegion);
    }
    if (destTTL) {
      res["destTTL"] = boost::any(*destTTL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destLogstore") != m.end() && !m["destLogstore"].empty()) {
      destLogstore = make_shared<string>(boost::any_cast<string>(m["destLogstore"]));
    }
    if (m.find("destProject") != m.end() && !m["destProject"].empty()) {
      destProject = make_shared<string>(boost::any_cast<string>(m["destProject"]));
    }
    if (m.find("destRegion") != m.end() && !m["destRegion"].empty()) {
      destRegion = make_shared<string>(boost::any_cast<string>(m["destRegion"]));
    }
    if (m.find("destTTL") != m.end() && !m["destTTL"].empty()) {
      destTTL = make_shared<long>(boost::any_cast<long>(m["destTTL"]));
    }
  }


  virtual ~GetCollectionPolicyResponseBodyCollectionPolicyCentralizeConfig() = default;
};
class GetCollectionPolicyResponseBodyCollectionPolicyPolicyConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<vector<string>> regions{};
  shared_ptr<string> resourceMode{};
  shared_ptr<map<string, boost::any>> resourceTags{};

  GetCollectionPolicyResponseBodyCollectionPolicyPolicyConfig() {}

  explicit GetCollectionPolicyResponseBodyCollectionPolicyPolicyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["instanceIds"] = boost::any(*instanceIds);
    }
    if (regions) {
      res["regions"] = boost::any(*regions);
    }
    if (resourceMode) {
      res["resourceMode"] = boost::any(*resourceMode);
    }
    if (resourceTags) {
      res["resourceTags"] = boost::any(*resourceTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceIds") != m.end() && !m["instanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("regions") != m.end() && !m["regions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["regions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["regions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceMode") != m.end() && !m["resourceMode"].empty()) {
      resourceMode = make_shared<string>(boost::any_cast<string>(m["resourceMode"]));
    }
    if (m.find("resourceTags") != m.end() && !m["resourceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["resourceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceTags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetCollectionPolicyResponseBodyCollectionPolicyPolicyConfig() = default;
};
class GetCollectionPolicyResponseBodyCollectionPolicy : public Darabonba::Model {
public:
  shared_ptr<GetCollectionPolicyResponseBodyCollectionPolicyAttribute> attribute{};
  shared_ptr<GetCollectionPolicyResponseBodyCollectionPolicyCentralizeConfig> centralizeConfig{};
  shared_ptr<bool> centralizeEnabled{};
  shared_ptr<string> dataCode{};
  shared_ptr<string> enabled{};
  shared_ptr<GetCollectionPolicyResponseBodyCollectionPolicyPolicyConfig> policyConfig{};
  shared_ptr<string> policyName{};
  shared_ptr<string> productCode{};

  GetCollectionPolicyResponseBodyCollectionPolicy() {}

  explicit GetCollectionPolicyResponseBodyCollectionPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      res["attribute"] = attribute ? boost::any(attribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (centralizeConfig) {
      res["centralizeConfig"] = centralizeConfig ? boost::any(centralizeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (centralizeEnabled) {
      res["centralizeEnabled"] = boost::any(*centralizeEnabled);
    }
    if (dataCode) {
      res["dataCode"] = boost::any(*dataCode);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (policyConfig) {
      res["policyConfig"] = policyConfig ? boost::any(policyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyName) {
      res["policyName"] = boost::any(*policyName);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["attribute"].type()) {
        GetCollectionPolicyResponseBodyCollectionPolicyAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["attribute"]));
        attribute = make_shared<GetCollectionPolicyResponseBodyCollectionPolicyAttribute>(model1);
      }
    }
    if (m.find("centralizeConfig") != m.end() && !m["centralizeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["centralizeConfig"].type()) {
        GetCollectionPolicyResponseBodyCollectionPolicyCentralizeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["centralizeConfig"]));
        centralizeConfig = make_shared<GetCollectionPolicyResponseBodyCollectionPolicyCentralizeConfig>(model1);
      }
    }
    if (m.find("centralizeEnabled") != m.end() && !m["centralizeEnabled"].empty()) {
      centralizeEnabled = make_shared<bool>(boost::any_cast<bool>(m["centralizeEnabled"]));
    }
    if (m.find("dataCode") != m.end() && !m["dataCode"].empty()) {
      dataCode = make_shared<string>(boost::any_cast<string>(m["dataCode"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["enabled"]));
    }
    if (m.find("policyConfig") != m.end() && !m["policyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["policyConfig"].type()) {
        GetCollectionPolicyResponseBodyCollectionPolicyPolicyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["policyConfig"]));
        policyConfig = make_shared<GetCollectionPolicyResponseBodyCollectionPolicyPolicyConfig>(model1);
      }
    }
    if (m.find("policyName") != m.end() && !m["policyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["policyName"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
  }


  virtual ~GetCollectionPolicyResponseBodyCollectionPolicy() = default;
};
class GetCollectionPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCollectionPolicyResponseBodyCollectionPolicy> collectionPolicy{};

  GetCollectionPolicyResponseBody() {}

  explicit GetCollectionPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionPolicy) {
      res["collectionPolicy"] = collectionPolicy ? boost::any(collectionPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("collectionPolicy") != m.end() && !m["collectionPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["collectionPolicy"].type()) {
        GetCollectionPolicyResponseBodyCollectionPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["collectionPolicy"]));
        collectionPolicy = make_shared<GetCollectionPolicyResponseBodyCollectionPolicy>(model1);
      }
    }
  }


  virtual ~GetCollectionPolicyResponseBody() = default;
};
class GetCollectionPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCollectionPolicyResponseBody> body{};

  GetCollectionPolicyResponse() {}

  explicit GetCollectionPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCollectionPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCollectionPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetCollectionPolicyResponse() = default;
};
class GetConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogtailConfig> body{};

  GetConfigResponse() {}

  explicit GetConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LogtailConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogtailConfig>(model1);
      }
    }
  }


  virtual ~GetConfigResponse() = default;
};
class GetContextLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> backLines{};
  shared_ptr<long> forwardLines{};
  shared_ptr<string> packId{};
  shared_ptr<string> packMeta{};
  shared_ptr<string> type{};

  GetContextLogsRequest() {}

  explicit GetContextLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backLines) {
      res["back_lines"] = boost::any(*backLines);
    }
    if (forwardLines) {
      res["forward_lines"] = boost::any(*forwardLines);
    }
    if (packId) {
      res["pack_id"] = boost::any(*packId);
    }
    if (packMeta) {
      res["pack_meta"] = boost::any(*packMeta);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("back_lines") != m.end() && !m["back_lines"].empty()) {
      backLines = make_shared<long>(boost::any_cast<long>(m["back_lines"]));
    }
    if (m.find("forward_lines") != m.end() && !m["forward_lines"].empty()) {
      forwardLines = make_shared<long>(boost::any_cast<long>(m["forward_lines"]));
    }
    if (m.find("pack_id") != m.end() && !m["pack_id"].empty()) {
      packId = make_shared<string>(boost::any_cast<string>(m["pack_id"]));
    }
    if (m.find("pack_meta") != m.end() && !m["pack_meta"].empty()) {
      packMeta = make_shared<string>(boost::any_cast<string>(m["pack_meta"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetContextLogsRequest() = default;
};
class GetContextLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> backLines{};
  shared_ptr<long> forwardLines{};
  shared_ptr<vector<map<string, boost::any>>> logs{};
  shared_ptr<string> progress{};
  shared_ptr<long> totalLines{};

  GetContextLogsResponseBody() {}

  explicit GetContextLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backLines) {
      res["back_lines"] = boost::any(*backLines);
    }
    if (forwardLines) {
      res["forward_lines"] = boost::any(*forwardLines);
    }
    if (logs) {
      res["logs"] = boost::any(*logs);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (totalLines) {
      res["total_lines"] = boost::any(*totalLines);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("back_lines") != m.end() && !m["back_lines"].empty()) {
      backLines = make_shared<long>(boost::any_cast<long>(m["back_lines"]));
    }
    if (m.find("forward_lines") != m.end() && !m["forward_lines"].empty()) {
      forwardLines = make_shared<long>(boost::any_cast<long>(m["forward_lines"]));
    }
    if (m.find("logs") != m.end() && !m["logs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["logs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      logs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["progress"]));
    }
    if (m.find("total_lines") != m.end() && !m["total_lines"].empty()) {
      totalLines = make_shared<long>(boost::any_cast<long>(m["total_lines"]));
    }
  }


  virtual ~GetContextLogsResponseBody() = default;
};
class GetContextLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetContextLogsResponseBody> body{};

  GetContextLogsResponse() {}

  explicit GetContextLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetContextLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetContextLogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetContextLogsResponse() = default;
};
class GetCursorRequest : public Darabonba::Model {
public:
  shared_ptr<string> from{};

  GetCursorRequest() {}

  explicit GetCursorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["from"]));
    }
  }


  virtual ~GetCursorRequest() = default;
};
class GetCursorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cursor{};

  GetCursorResponseBody() {}

  explicit GetCursorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursor) {
      res["cursor"] = boost::any(*cursor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cursor") != m.end() && !m["cursor"].empty()) {
      cursor = make_shared<string>(boost::any_cast<string>(m["cursor"]));
    }
  }


  virtual ~GetCursorResponseBody() = default;
};
class GetCursorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCursorResponseBody> body{};

  GetCursorResponse() {}

  explicit GetCursorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCursorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCursorResponseBody>(model1);
      }
    }
  }


  virtual ~GetCursorResponse() = default;
};
class GetCursorTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cursor{};

  GetCursorTimeRequest() {}

  explicit GetCursorTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursor) {
      res["cursor"] = boost::any(*cursor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cursor") != m.end() && !m["cursor"].empty()) {
      cursor = make_shared<string>(boost::any_cast<string>(m["cursor"]));
    }
  }


  virtual ~GetCursorTimeRequest() = default;
};
class GetCursorTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cursorTime{};

  GetCursorTimeResponseBody() {}

  explicit GetCursorTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursorTime) {
      res["cursor_time"] = boost::any(*cursorTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cursor_time") != m.end() && !m["cursor_time"].empty()) {
      cursorTime = make_shared<string>(boost::any_cast<string>(m["cursor_time"]));
    }
  }


  virtual ~GetCursorTimeResponseBody() = default;
};
class GetCursorTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCursorTimeResponseBody> body{};

  GetCursorTimeResponse() {}

  explicit GetCursorTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCursorTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCursorTimeResponseBody>(model1);
      }
    }
  }


  virtual ~GetCursorTimeResponse() = default;
};
class GetDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Dashboard> body{};

  GetDashboardResponse() {}

  explicit GetDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Dashboard model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Dashboard>(model1);
      }
    }
  }


  virtual ~GetDashboardResponse() = default;
};
class GetETLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ETL> body{};

  GetETLResponse() {}

  explicit GetETLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ETL model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ETL>(model1);
      }
    }
  }


  virtual ~GetETLResponse() = default;
};
class GetExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExternalStore> body{};

  GetExternalStoreResponse() {}

  explicit GetExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExternalStore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExternalStore>(model1);
      }
    }
  }


  virtual ~GetExternalStoreResponse() = default;
};
class GetHistogramsRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> query{};
  shared_ptr<long> to{};
  shared_ptr<string> topic{};

  GetHistogramsRequest() {}

  explicit GetHistogramsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~GetHistogramsRequest() = default;
};
class GetHistogramsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> to{};
  shared_ptr<long> count{};
  shared_ptr<string> progress{};

  GetHistogramsResponseBody() {}

  explicit GetHistogramsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["progress"]));
    }
  }


  virtual ~GetHistogramsResponseBody() = default;
};
class GetHistogramsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<GetHistogramsResponseBody>> body{};

  GetHistogramsResponse() {}

  explicit GetHistogramsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<GetHistogramsResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHistogramsResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<GetHistogramsResponseBody>>(expect1);
      }
    }
  }


  virtual ~GetHistogramsResponse() = default;
};
class GetIndexResponseBodyLine : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<vector<string>> excludeKeys{};
  shared_ptr<vector<string>> includeKeys{};
  shared_ptr<vector<string>> token{};

  GetIndexResponseBodyLine() {}

  explicit GetIndexResponseBodyLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (excludeKeys) {
      res["exclude_keys"] = boost::any(*excludeKeys);
    }
    if (includeKeys) {
      res["include_keys"] = boost::any(*includeKeys);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("exclude_keys") != m.end() && !m["exclude_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["exclude_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["exclude_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("include_keys") != m.end() && !m["include_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["include_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["include_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      includeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetIndexResponseBodyLine() = default;
};
class GetIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> indexMode{};
  shared_ptr<map<string, KeysValue>> keys{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<GetIndexResponseBodyLine> line{};
  shared_ptr<bool> logReduce{};
  shared_ptr<vector<string>> logReduceBlackList{};
  shared_ptr<vector<string>> logReduceWhiteList{};
  shared_ptr<long> maxTextLen{};
  shared_ptr<string> storage{};
  shared_ptr<long> ttl{};

  GetIndexResponseBody() {}

  explicit GetIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexMode) {
      res["index_mode"] = boost::any(*indexMode);
    }
    if (keys) {
      map<string, boost::any> temp1;
      for(auto item1:*keys){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["keys"] = boost::any(temp1);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (line) {
      res["line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logReduce) {
      res["log_reduce"] = boost::any(*logReduce);
    }
    if (logReduceBlackList) {
      res["log_reduce_black_list"] = boost::any(*logReduceBlackList);
    }
    if (logReduceWhiteList) {
      res["log_reduce_white_list"] = boost::any(*logReduceWhiteList);
    }
    if (maxTextLen) {
      res["max_text_len"] = boost::any(*maxTextLen);
    }
    if (storage) {
      res["storage"] = boost::any(*storage);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("index_mode") != m.end() && !m["index_mode"].empty()) {
      indexMode = make_shared<string>(boost::any_cast<string>(m["index_mode"]));
    }
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["keys"].type()) {
        map<string, KeysValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["keys"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            KeysValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        keys = make_shared<map<string, KeysValue>>(expect1);
      }
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      if (typeid(map<string, boost::any>) == m["line"].type()) {
        GetIndexResponseBodyLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["line"]));
        line = make_shared<GetIndexResponseBodyLine>(model1);
      }
    }
    if (m.find("log_reduce") != m.end() && !m["log_reduce"].empty()) {
      logReduce = make_shared<bool>(boost::any_cast<bool>(m["log_reduce"]));
    }
    if (m.find("log_reduce_black_list") != m.end() && !m["log_reduce_black_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_black_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_black_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("log_reduce_white_list") != m.end() && !m["log_reduce_white_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_white_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_white_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("max_text_len") != m.end() && !m["max_text_len"].empty()) {
      maxTextLen = make_shared<long>(boost::any_cast<long>(m["max_text_len"]));
    }
    if (m.find("storage") != m.end() && !m["storage"].empty()) {
      storage = make_shared<string>(boost::any_cast<string>(m["storage"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~GetIndexResponseBody() = default;
};
class GetIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIndexResponseBody> body{};

  GetIndexResponse() {}

  explicit GetIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIndexResponseBody>(model1);
      }
    }
  }


  virtual ~GetIndexResponse() = default;
};
class GetLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Logstore> body{};

  GetLogStoreResponse() {}

  explicit GetLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Logstore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Logstore>(model1);
      }
    }
  }


  virtual ~GetLogStoreResponse() = default;
};
class GetLogStoreMeteringModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> meteringMode{};

  GetLogStoreMeteringModeResponseBody() {}

  explicit GetLogStoreMeteringModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meteringMode) {
      res["meteringMode"] = boost::any(*meteringMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("meteringMode") != m.end() && !m["meteringMode"].empty()) {
      meteringMode = make_shared<string>(boost::any_cast<string>(m["meteringMode"]));
    }
  }


  virtual ~GetLogStoreMeteringModeResponseBody() = default;
};
class GetLogStoreMeteringModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLogStoreMeteringModeResponseBody> body{};

  GetLogStoreMeteringModeResponse() {}

  explicit GetLogStoreMeteringModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLogStoreMeteringModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogStoreMeteringModeResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogStoreMeteringModeResponse() = default;
};
class GetLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Logging> body{};

  GetLoggingResponse() {}

  explicit GetLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Logging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Logging>(model1);
      }
    }
  }


  virtual ~GetLoggingResponse() = default;
};
class GetLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> line{};
  shared_ptr<long> offset{};
  shared_ptr<bool> powerSql{};
  shared_ptr<string> query{};
  shared_ptr<bool> reverse{};
  shared_ptr<long> to{};
  shared_ptr<string> topic{};

  GetLogsRequest() {}

  explicit GetLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (line) {
      res["line"] = boost::any(*line);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (powerSql) {
      res["powerSql"] = boost::any(*powerSql);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (reverse) {
      res["reverse"] = boost::any(*reverse);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      line = make_shared<long>(boost::any_cast<long>(m["line"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("powerSql") != m.end() && !m["powerSql"].empty()) {
      powerSql = make_shared<bool>(boost::any_cast<bool>(m["powerSql"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("reverse") != m.end() && !m["reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["reverse"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~GetLogsRequest() = default;
};
class GetLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<map<string, boost::any>>> body{};

  GetLogsResponse() {}

  explicit GetLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      body = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetLogsResponse() = default;
};
class GetLogsV2Headers : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> acceptEncoding{};

  GetLogsV2Headers() {}

  explicit GetLogsV2Headers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (acceptEncoding) {
      res["Accept-Encoding"] = boost::any(*acceptEncoding);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Accept-Encoding") != m.end() && !m["Accept-Encoding"].empty()) {
      acceptEncoding = make_shared<string>(boost::any_cast<string>(m["Accept-Encoding"]));
    }
  }


  virtual ~GetLogsV2Headers() = default;
};
class GetLogsV2Request : public Darabonba::Model {
public:
  shared_ptr<bool> forward{};
  shared_ptr<long> from{};
  shared_ptr<bool> highlight{};
  shared_ptr<long> line{};
  shared_ptr<long> offset{};
  shared_ptr<bool> powerSql{};
  shared_ptr<string> query{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> session{};
  shared_ptr<long> to{};
  shared_ptr<string> topic{};

  GetLogsV2Request() {}

  explicit GetLogsV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forward) {
      res["forward"] = boost::any(*forward);
    }
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (highlight) {
      res["highlight"] = boost::any(*highlight);
    }
    if (line) {
      res["line"] = boost::any(*line);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (powerSql) {
      res["powerSql"] = boost::any(*powerSql);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (reverse) {
      res["reverse"] = boost::any(*reverse);
    }
    if (session) {
      res["session"] = boost::any(*session);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("forward") != m.end() && !m["forward"].empty()) {
      forward = make_shared<bool>(boost::any_cast<bool>(m["forward"]));
    }
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("highlight") != m.end() && !m["highlight"].empty()) {
      highlight = make_shared<bool>(boost::any_cast<bool>(m["highlight"]));
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      line = make_shared<long>(boost::any_cast<long>(m["line"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("powerSql") != m.end() && !m["powerSql"].empty()) {
      powerSql = make_shared<bool>(boost::any_cast<bool>(m["powerSql"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("reverse") != m.end() && !m["reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["reverse"]));
    }
    if (m.find("session") != m.end() && !m["session"].empty()) {
      session = make_shared<string>(boost::any_cast<string>(m["session"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~GetLogsV2Request() = default;
};
class GetLogsV2ResponseBodyMetaPhraseQueryInfo : public Darabonba::Model {
public:
  shared_ptr<long> beginOffset{};
  shared_ptr<long> endOffset{};
  shared_ptr<long> endTime{};
  shared_ptr<bool> scanAll{};

  GetLogsV2ResponseBodyMetaPhraseQueryInfo() {}

  explicit GetLogsV2ResponseBodyMetaPhraseQueryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginOffset) {
      res["beginOffset"] = boost::any(*beginOffset);
    }
    if (endOffset) {
      res["endOffset"] = boost::any(*endOffset);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (scanAll) {
      res["scanAll"] = boost::any(*scanAll);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("beginOffset") != m.end() && !m["beginOffset"].empty()) {
      beginOffset = make_shared<long>(boost::any_cast<long>(m["beginOffset"]));
    }
    if (m.find("endOffset") != m.end() && !m["endOffset"].empty()) {
      endOffset = make_shared<long>(boost::any_cast<long>(m["endOffset"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("scanAll") != m.end() && !m["scanAll"].empty()) {
      scanAll = make_shared<bool>(boost::any_cast<bool>(m["scanAll"]));
    }
  }


  virtual ~GetLogsV2ResponseBodyMetaPhraseQueryInfo() = default;
};
class GetLogsV2ResponseBodyMeta : public Darabonba::Model {
public:
  shared_ptr<string> aggQuery{};
  shared_ptr<vector<string>> columnTypes{};
  shared_ptr<long> count{};
  shared_ptr<long> cpuCores{};
  shared_ptr<double> cpuSec{};
  shared_ptr<long> elapsedMillisecond{};
  shared_ptr<bool> hasSQL{};
  shared_ptr<vector<vector<LogContent>>> highlights{};
  shared_ptr<bool> isAccurate{};
  shared_ptr<vector<string>> keys{};
  shared_ptr<long> limited{};
  shared_ptr<long> mode{};
  shared_ptr<GetLogsV2ResponseBodyMetaPhraseQueryInfo> phraseQueryInfo{};
  shared_ptr<long> processedBytes{};
  shared_ptr<long> processedRows{};
  shared_ptr<string> progress{};
  shared_ptr<long> scanBytes{};
  shared_ptr<string> telementryType{};
  shared_ptr<vector<map<string, boost::any>>> terms{};
  shared_ptr<string> whereQuery{};

  GetLogsV2ResponseBodyMeta() {}

  explicit GetLogsV2ResponseBodyMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggQuery) {
      res["aggQuery"] = boost::any(*aggQuery);
    }
    if (columnTypes) {
      res["columnTypes"] = boost::any(*columnTypes);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (cpuCores) {
      res["cpuCores"] = boost::any(*cpuCores);
    }
    if (cpuSec) {
      res["cpuSec"] = boost::any(*cpuSec);
    }
    if (elapsedMillisecond) {
      res["elapsedMillisecond"] = boost::any(*elapsedMillisecond);
    }
    if (hasSQL) {
      res["hasSQL"] = boost::any(*hasSQL);
    }
    if (highlights) {
      vector<boost::any> temp1;
      for(auto item1:*highlights){
        vector<boost::any> temp2;
        for(auto item2:item1){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1 = boost::any(temp2);
      }
      res["highlights"] = boost::any(temp1);
    }
    if (isAccurate) {
      res["isAccurate"] = boost::any(*isAccurate);
    }
    if (keys) {
      res["keys"] = boost::any(*keys);
    }
    if (limited) {
      res["limited"] = boost::any(*limited);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (phraseQueryInfo) {
      res["phraseQueryInfo"] = phraseQueryInfo ? boost::any(phraseQueryInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (processedBytes) {
      res["processedBytes"] = boost::any(*processedBytes);
    }
    if (processedRows) {
      res["processedRows"] = boost::any(*processedRows);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (scanBytes) {
      res["scanBytes"] = boost::any(*scanBytes);
    }
    if (telementryType) {
      res["telementryType"] = boost::any(*telementryType);
    }
    if (terms) {
      res["terms"] = boost::any(*terms);
    }
    if (whereQuery) {
      res["whereQuery"] = boost::any(*whereQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aggQuery") != m.end() && !m["aggQuery"].empty()) {
      aggQuery = make_shared<string>(boost::any_cast<string>(m["aggQuery"]));
    }
    if (m.find("columnTypes") != m.end() && !m["columnTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["columnTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["columnTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columnTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("cpuCores") != m.end() && !m["cpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["cpuCores"]));
    }
    if (m.find("cpuSec") != m.end() && !m["cpuSec"].empty()) {
      cpuSec = make_shared<double>(boost::any_cast<double>(m["cpuSec"]));
    }
    if (m.find("elapsedMillisecond") != m.end() && !m["elapsedMillisecond"].empty()) {
      elapsedMillisecond = make_shared<long>(boost::any_cast<long>(m["elapsedMillisecond"]));
    }
    if (m.find("hasSQL") != m.end() && !m["hasSQL"].empty()) {
      hasSQL = make_shared<bool>(boost::any_cast<bool>(m["hasSQL"]));
    }
    if (m.find("highlights") != m.end() && !m["highlights"].empty()) {
      if (typeid(vector<boost::any>) == m["highlights"].type()) {
        vector<vector<LogContent>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["highlights"])){
          if (typeid(vector<boost::any>) == item1.type()) {
            vector<LogContent> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                LogContent model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1.push_back(expect2);
          }
        }
        highlights = make_shared<vector<vector<LogContent>>>(expect1);
      }
    }
    if (m.find("isAccurate") != m.end() && !m["isAccurate"].empty()) {
      isAccurate = make_shared<bool>(boost::any_cast<bool>(m["isAccurate"]));
    }
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("limited") != m.end() && !m["limited"].empty()) {
      limited = make_shared<long>(boost::any_cast<long>(m["limited"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<long>(boost::any_cast<long>(m["mode"]));
    }
    if (m.find("phraseQueryInfo") != m.end() && !m["phraseQueryInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["phraseQueryInfo"].type()) {
        GetLogsV2ResponseBodyMetaPhraseQueryInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["phraseQueryInfo"]));
        phraseQueryInfo = make_shared<GetLogsV2ResponseBodyMetaPhraseQueryInfo>(model1);
      }
    }
    if (m.find("processedBytes") != m.end() && !m["processedBytes"].empty()) {
      processedBytes = make_shared<long>(boost::any_cast<long>(m["processedBytes"]));
    }
    if (m.find("processedRows") != m.end() && !m["processedRows"].empty()) {
      processedRows = make_shared<long>(boost::any_cast<long>(m["processedRows"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["progress"]));
    }
    if (m.find("scanBytes") != m.end() && !m["scanBytes"].empty()) {
      scanBytes = make_shared<long>(boost::any_cast<long>(m["scanBytes"]));
    }
    if (m.find("telementryType") != m.end() && !m["telementryType"].empty()) {
      telementryType = make_shared<string>(boost::any_cast<string>(m["telementryType"]));
    }
    if (m.find("terms") != m.end() && !m["terms"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["terms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["terms"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      terms = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("whereQuery") != m.end() && !m["whereQuery"].empty()) {
      whereQuery = make_shared<string>(boost::any_cast<string>(m["whereQuery"]));
    }
  }


  virtual ~GetLogsV2ResponseBodyMeta() = default;
};
class GetLogsV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> data{};
  shared_ptr<GetLogsV2ResponseBodyMeta> meta{};

  GetLogsV2ResponseBody() {}

  explicit GetLogsV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        GetLogsV2ResponseBodyMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<GetLogsV2ResponseBodyMeta>(model1);
      }
    }
  }


  virtual ~GetLogsV2ResponseBody() = default;
};
class GetLogsV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLogsV2ResponseBody> body{};

  GetLogsV2Response() {}

  explicit GetLogsV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLogsV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogsV2ResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogsV2Response() = default;
};
class GetLogtailPipelineConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogtailPipelineConfig> body{};

  GetLogtailPipelineConfigResponse() {}

  explicit GetLogtailPipelineConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LogtailPipelineConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogtailPipelineConfig>(model1);
      }
    }
  }


  virtual ~GetLogtailPipelineConfigResponse() = default;
};
class GetMLServiceResultsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowBuiltin{};
  shared_ptr<MLServiceAnalysisParam> body{};
  shared_ptr<string> version{};

  GetMLServiceResultsRequest() {}

  explicit GetMLServiceResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowBuiltin) {
      res["allowBuiltin"] = boost::any(*allowBuiltin);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowBuiltin") != m.end() && !m["allowBuiltin"].empty()) {
      allowBuiltin = make_shared<bool>(boost::any_cast<bool>(m["allowBuiltin"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLServiceAnalysisParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLServiceAnalysisParam>(model1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetMLServiceResultsRequest() = default;
};
class GetMLServiceResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> data{};
  shared_ptr<map<string, string>> status{};

  GetMLServiceResultsResponseBody() {}

  explicit GetMLServiceResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["status"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      status = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetMLServiceResultsResponseBody() = default;
};
class GetMLServiceResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMLServiceResultsResponseBody> body{};

  GetMLServiceResultsResponse() {}

  explicit GetMLServiceResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMLServiceResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMLServiceResultsResponseBody>(model1);
      }
    }
  }


  virtual ~GetMLServiceResultsResponse() = default;
};
class GetMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MachineGroup> body{};

  GetMachineGroupResponse() {}

  explicit GetMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MachineGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MachineGroup>(model1);
      }
    }
  }


  virtual ~GetMachineGroupResponse() = default;
};
class GetMetricStoreMeteringModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> meteringMode{};

  GetMetricStoreMeteringModeResponseBody() {}

  explicit GetMetricStoreMeteringModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meteringMode) {
      res["meteringMode"] = boost::any(*meteringMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("meteringMode") != m.end() && !m["meteringMode"].empty()) {
      meteringMode = make_shared<string>(boost::any_cast<string>(m["meteringMode"]));
    }
  }


  virtual ~GetMetricStoreMeteringModeResponseBody() = default;
};
class GetMetricStoreMeteringModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMetricStoreMeteringModeResponseBody> body{};

  GetMetricStoreMeteringModeResponse() {}

  explicit GetMetricStoreMeteringModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMetricStoreMeteringModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMetricStoreMeteringModeResponseBody>(model1);
      }
    }
  }


  virtual ~GetMetricStoreMeteringModeResponse() = default;
};
class GetOSSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OSSExport> body{};

  GetOSSExportResponse() {}

  explicit GetOSSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OSSExport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OSSExport>(model1);
      }
    }
  }


  virtual ~GetOSSExportResponse() = default;
};
class GetOSSHDFSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OSSExport> body{};

  GetOSSHDFSExportResponse() {}

  explicit GetOSSHDFSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OSSExport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OSSExport>(model1);
      }
    }
  }


  virtual ~GetOSSHDFSExportResponse() = default;
};
class GetOSSIngestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OSSIngestion> body{};

  GetOSSIngestionResponse() {}

  explicit GetOSSIngestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OSSIngestion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OSSIngestion>(model1);
      }
    }
  }


  virtual ~GetOSSIngestionResponse() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Project> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetProjectLogsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> powerSql{};
  shared_ptr<string> query{};

  GetProjectLogsRequest() {}

  explicit GetProjectLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (powerSql) {
      res["powerSql"] = boost::any(*powerSql);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("powerSql") != m.end() && !m["powerSql"].empty()) {
      powerSql = make_shared<bool>(boost::any_cast<bool>(m["powerSql"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
  }


  virtual ~GetProjectLogsRequest() = default;
};
class GetProjectLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<map<string, string>>> body{};

  GetProjectLogsResponse() {}

  explicit GetProjectLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      body = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~GetProjectLogsResponse() = default;
};
class GetProjectPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  GetProjectPolicyResponse() {}

  explicit GetProjectPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~GetProjectPolicyResponse() = default;
};
class GetSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SavedSearch> body{};

  GetSavedSearchResponse() {}

  explicit GetSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SavedSearch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SavedSearch>(model1);
      }
    }
  }


  virtual ~GetSavedSearchResponse() = default;
};
class GetScheduledSQLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ScheduledSQL> body{};

  GetScheduledSQLResponse() {}

  explicit GetScheduledSQLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ScheduledSQL model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScheduledSQL>(model1);
      }
    }
  }


  virtual ~GetScheduledSQLResponse() = default;
};
class GetShipperStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<long> to{};

  GetShipperStatusRequest() {}

  explicit GetShipperStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~GetShipperStatusRequest() = default;
};
class GetShipperStatusResponseBodyStatistics : public Darabonba::Model {
public:
  shared_ptr<long> fail{};
  shared_ptr<long> running{};
  shared_ptr<long> success{};

  GetShipperStatusResponseBodyStatistics() {}

  explicit GetShipperStatusResponseBodyStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fail) {
      res["fail"] = boost::any(*fail);
    }
    if (running) {
      res["running"] = boost::any(*running);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fail") != m.end() && !m["fail"].empty()) {
      fail = make_shared<long>(boost::any_cast<long>(m["fail"]));
    }
    if (m.find("running") != m.end() && !m["running"].empty()) {
      running = make_shared<long>(boost::any_cast<long>(m["running"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<long>(boost::any_cast<long>(m["success"]));
    }
  }


  virtual ~GetShipperStatusResponseBodyStatistics() = default;
};
class GetShipperStatusResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> taskCode{};
  shared_ptr<long> taskCreateTime{};
  shared_ptr<long> taskDataLines{};
  shared_ptr<long> taskFinishTime{};
  shared_ptr<long> taskLastDataReceiveTime{};
  shared_ptr<string> taskMessage{};
  shared_ptr<string> taskStatus{};

  GetShipperStatusResponseBodyTasks() {}

  explicit GetShipperStatusResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (taskCode) {
      res["taskCode"] = boost::any(*taskCode);
    }
    if (taskCreateTime) {
      res["taskCreateTime"] = boost::any(*taskCreateTime);
    }
    if (taskDataLines) {
      res["taskDataLines"] = boost::any(*taskDataLines);
    }
    if (taskFinishTime) {
      res["taskFinishTime"] = boost::any(*taskFinishTime);
    }
    if (taskLastDataReceiveTime) {
      res["taskLastDataReceiveTime"] = boost::any(*taskLastDataReceiveTime);
    }
    if (taskMessage) {
      res["taskMessage"] = boost::any(*taskMessage);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("taskCode") != m.end() && !m["taskCode"].empty()) {
      taskCode = make_shared<string>(boost::any_cast<string>(m["taskCode"]));
    }
    if (m.find("taskCreateTime") != m.end() && !m["taskCreateTime"].empty()) {
      taskCreateTime = make_shared<long>(boost::any_cast<long>(m["taskCreateTime"]));
    }
    if (m.find("taskDataLines") != m.end() && !m["taskDataLines"].empty()) {
      taskDataLines = make_shared<long>(boost::any_cast<long>(m["taskDataLines"]));
    }
    if (m.find("taskFinishTime") != m.end() && !m["taskFinishTime"].empty()) {
      taskFinishTime = make_shared<long>(boost::any_cast<long>(m["taskFinishTime"]));
    }
    if (m.find("taskLastDataReceiveTime") != m.end() && !m["taskLastDataReceiveTime"].empty()) {
      taskLastDataReceiveTime = make_shared<long>(boost::any_cast<long>(m["taskLastDataReceiveTime"]));
    }
    if (m.find("taskMessage") != m.end() && !m["taskMessage"].empty()) {
      taskMessage = make_shared<string>(boost::any_cast<string>(m["taskMessage"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
  }


  virtual ~GetShipperStatusResponseBodyTasks() = default;
};
class GetShipperStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<GetShipperStatusResponseBodyStatistics> statistics{};
  shared_ptr<GetShipperStatusResponseBodyTasks> tasks{};
  shared_ptr<long> total{};

  GetShipperStatusResponseBody() {}

  explicit GetShipperStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (statistics) {
      res["statistics"] = statistics ? boost::any(statistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tasks) {
      res["tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("statistics") != m.end() && !m["statistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["statistics"].type()) {
        GetShipperStatusResponseBodyStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["statistics"]));
        statistics = make_shared<GetShipperStatusResponseBodyStatistics>(model1);
      }
    }
    if (m.find("tasks") != m.end() && !m["tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["tasks"].type()) {
        GetShipperStatusResponseBodyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tasks"]));
        tasks = make_shared<GetShipperStatusResponseBodyTasks>(model1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetShipperStatusResponseBody() = default;
};
class GetShipperStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetShipperStatusResponseBody> body{};

  GetShipperStatusResponse() {}

  explicit GetShipperStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetShipperStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetShipperStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetShipperStatusResponse() = default;
};
class GetSlsServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ServiceStatus> body{};

  GetSlsServiceResponse() {}

  explicit GetSlsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ServiceStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ServiceStatus>(model1);
      }
    }
  }


  virtual ~GetSlsServiceResponse() = default;
};
class GetSqlInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> cu{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<bool> useAsDefault{};

  GetSqlInstanceResponseBody() {}

  explicit GetSqlInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (useAsDefault) {
      res["useAsDefault"] = boost::any(*useAsDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("useAsDefault") != m.end() && !m["useAsDefault"].empty()) {
      useAsDefault = make_shared<bool>(boost::any_cast<bool>(m["useAsDefault"]));
    }
  }


  virtual ~GetSqlInstanceResponseBody() = default;
};
class GetSqlInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<GetSqlInstanceResponseBody>> body{};

  GetSqlInstanceResponse() {}

  explicit GetSqlInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<GetSqlInstanceResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSqlInstanceResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<GetSqlInstanceResponseBody>>(expect1);
      }
    }
  }


  virtual ~GetSqlInstanceResponse() = default;
};
class GetStoreViewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> storeType{};
  shared_ptr<vector<StoreViewStore>> stores{};

  GetStoreViewResponseBody() {}

  explicit GetStoreViewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    if (stores) {
      vector<boost::any> temp1;
      for(auto item1:*stores){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stores"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
    if (m.find("stores") != m.end() && !m["stores"].empty()) {
      if (typeid(vector<boost::any>) == m["stores"].type()) {
        vector<StoreViewStore> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stores"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StoreViewStore model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stores = make_shared<vector<StoreViewStore>>(expect1);
      }
    }
  }


  virtual ~GetStoreViewResponseBody() = default;
};
class GetStoreViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStoreViewResponseBody> body{};

  GetStoreViewResponse() {}

  explicit GetStoreViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetStoreViewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStoreViewResponseBody>(model1);
      }
    }
  }


  virtual ~GetStoreViewResponse() = default;
};
class GetStoreViewIndexResponseBodyIndexes : public Darabonba::Model {
public:
  shared_ptr<Index> index{};
  shared_ptr<string> logstore{};
  shared_ptr<string> project{};

  GetStoreViewIndexResponseBodyIndexes() {}

  explicit GetStoreViewIndexResponseBodyIndexes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["index"] = index ? boost::any(index->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("index") != m.end() && !m["index"].empty()) {
      if (typeid(map<string, boost::any>) == m["index"].type()) {
        Index model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["index"]));
        index = make_shared<Index>(model1);
      }
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
  }


  virtual ~GetStoreViewIndexResponseBodyIndexes() = default;
};
class GetStoreViewIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetStoreViewIndexResponseBodyIndexes>> indexes{};

  GetStoreViewIndexResponseBody() {}

  explicit GetStoreViewIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexes) {
      vector<boost::any> temp1;
      for(auto item1:*indexes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["indexes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      if (typeid(vector<boost::any>) == m["indexes"].type()) {
        vector<GetStoreViewIndexResponseBodyIndexes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["indexes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStoreViewIndexResponseBodyIndexes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indexes = make_shared<vector<GetStoreViewIndexResponseBodyIndexes>>(expect1);
      }
    }
  }


  virtual ~GetStoreViewIndexResponseBody() = default;
};
class GetStoreViewIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStoreViewIndexResponseBody> body{};

  GetStoreViewIndexResponse() {}

  explicit GetStoreViewIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetStoreViewIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStoreViewIndexResponseBody>(model1);
      }
    }
  }


  virtual ~GetStoreViewIndexResponse() = default;
};
class ListAlertsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListAlertsRequest() {}

  explicit ListAlertsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListAlertsRequest() = default;
};
class ListAlertsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<Alert>> results{};
  shared_ptr<long> total{};

  ListAlertsResponseBody() {}

  explicit ListAlertsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["results"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("results") != m.end() && !m["results"].empty()) {
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<Alert> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Alert model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<Alert>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListAlertsResponseBody() = default;
};
class ListAlertsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAlertsResponseBody> body{};

  ListAlertsResponse() {}

  explicit ListAlertsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlertsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlertsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlertsResponse() = default;
};
class ListAnnotationDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListAnnotationDataRequest() {}

  explicit ListAnnotationDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListAnnotationDataRequest() = default;
};
class ListAnnotationDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<MLDataParam>> data{};
  shared_ptr<long> total{};

  ListAnnotationDataResponseBody() {}

  explicit ListAnnotationDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<MLDataParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MLDataParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<MLDataParam>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListAnnotationDataResponseBody() = default;
};
class ListAnnotationDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAnnotationDataResponseBody> body{};

  ListAnnotationDataResponse() {}

  explicit ListAnnotationDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnnotationDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnnotationDataResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnnotationDataResponse() = default;
};
class ListAnnotationDataSetsRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListAnnotationDataSetsRequest() {}

  explicit ListAnnotationDataSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListAnnotationDataSetsRequest() = default;
};
class ListAnnotationDataSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<MLDataSetParam>> data{};
  shared_ptr<long> total{};

  ListAnnotationDataSetsResponseBody() {}

  explicit ListAnnotationDataSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<MLDataSetParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MLDataSetParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<MLDataSetParam>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListAnnotationDataSetsResponseBody() = default;
};
class ListAnnotationDataSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAnnotationDataSetsResponseBody> body{};

  ListAnnotationDataSetsResponse() {}

  explicit ListAnnotationDataSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnnotationDataSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnnotationDataSetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnnotationDataSetsResponse() = default;
};
class ListAnnotationLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListAnnotationLabelsRequest() {}

  explicit ListAnnotationLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListAnnotationLabelsRequest() = default;
};
class ListAnnotationLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<MLLabelParam>> data{};
  shared_ptr<long> total{};

  ListAnnotationLabelsResponseBody() {}

  explicit ListAnnotationLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<MLLabelParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MLLabelParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<MLLabelParam>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListAnnotationLabelsResponseBody() = default;
};
class ListAnnotationLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAnnotationLabelsResponseBody> body{};

  ListAnnotationLabelsResponse() {}

  explicit ListAnnotationLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnnotationLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnnotationLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnnotationLabelsResponse() = default;
};
class ListCollectionPoliciesRequestAttribute : public Darabonba::Model {
public:
  shared_ptr<string> app{};
  shared_ptr<string> policyGroup{};

  ListCollectionPoliciesRequestAttribute() {}

  explicit ListCollectionPoliciesRequestAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["app"] = boost::any(*app);
    }
    if (policyGroup) {
      res["policyGroup"] = boost::any(*policyGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("app") != m.end() && !m["app"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["app"]));
    }
    if (m.find("policyGroup") != m.end() && !m["policyGroup"].empty()) {
      policyGroup = make_shared<string>(boost::any_cast<string>(m["policyGroup"]));
    }
  }


  virtual ~ListCollectionPoliciesRequestAttribute() = default;
};
class ListCollectionPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<ListCollectionPoliciesRequestAttribute> attribute{};
  shared_ptr<string> dataCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyName{};
  shared_ptr<string> productCode{};

  ListCollectionPoliciesRequest() {}

  explicit ListCollectionPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      res["attribute"] = attribute ? boost::any(attribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataCode) {
      res["dataCode"] = boost::any(*dataCode);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (policyName) {
      res["policyName"] = boost::any(*policyName);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["attribute"].type()) {
        ListCollectionPoliciesRequestAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["attribute"]));
        attribute = make_shared<ListCollectionPoliciesRequestAttribute>(model1);
      }
    }
    if (m.find("dataCode") != m.end() && !m["dataCode"].empty()) {
      dataCode = make_shared<string>(boost::any_cast<string>(m["dataCode"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("policyName") != m.end() && !m["policyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["policyName"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
  }


  virtual ~ListCollectionPoliciesRequest() = default;
};
class ListCollectionPoliciesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributeShrink{};
  shared_ptr<string> dataCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyName{};
  shared_ptr<string> productCode{};

  ListCollectionPoliciesShrinkRequest() {}

  explicit ListCollectionPoliciesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeShrink) {
      res["attribute"] = boost::any(*attributeShrink);
    }
    if (dataCode) {
      res["dataCode"] = boost::any(*dataCode);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (policyName) {
      res["policyName"] = boost::any(*policyName);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      attributeShrink = make_shared<string>(boost::any_cast<string>(m["attribute"]));
    }
    if (m.find("dataCode") != m.end() && !m["dataCode"].empty()) {
      dataCode = make_shared<string>(boost::any_cast<string>(m["dataCode"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["pageNum"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("policyName") != m.end() && !m["policyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["policyName"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
  }


  virtual ~ListCollectionPoliciesShrinkRequest() = default;
};
class ListCollectionPoliciesResponseBodyDataAttribute : public Darabonba::Model {
public:
  shared_ptr<string> app{};
  shared_ptr<string> policyGroup{};

  ListCollectionPoliciesResponseBodyDataAttribute() {}

  explicit ListCollectionPoliciesResponseBodyDataAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["app"] = boost::any(*app);
    }
    if (policyGroup) {
      res["policyGroup"] = boost::any(*policyGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("app") != m.end() && !m["app"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["app"]));
    }
    if (m.find("policyGroup") != m.end() && !m["policyGroup"].empty()) {
      policyGroup = make_shared<string>(boost::any_cast<string>(m["policyGroup"]));
    }
  }


  virtual ~ListCollectionPoliciesResponseBodyDataAttribute() = default;
};
class ListCollectionPoliciesResponseBodyDataCentralizeConfig : public Darabonba::Model {
public:
  shared_ptr<string> destLogstore{};
  shared_ptr<string> destProject{};
  shared_ptr<string> destRegion{};
  shared_ptr<long> destTTL{};

  ListCollectionPoliciesResponseBodyDataCentralizeConfig() {}

  explicit ListCollectionPoliciesResponseBodyDataCentralizeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destLogstore) {
      res["destLogstore"] = boost::any(*destLogstore);
    }
    if (destProject) {
      res["destProject"] = boost::any(*destProject);
    }
    if (destRegion) {
      res["destRegion"] = boost::any(*destRegion);
    }
    if (destTTL) {
      res["destTTL"] = boost::any(*destTTL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destLogstore") != m.end() && !m["destLogstore"].empty()) {
      destLogstore = make_shared<string>(boost::any_cast<string>(m["destLogstore"]));
    }
    if (m.find("destProject") != m.end() && !m["destProject"].empty()) {
      destProject = make_shared<string>(boost::any_cast<string>(m["destProject"]));
    }
    if (m.find("destRegion") != m.end() && !m["destRegion"].empty()) {
      destRegion = make_shared<string>(boost::any_cast<string>(m["destRegion"]));
    }
    if (m.find("destTTL") != m.end() && !m["destTTL"].empty()) {
      destTTL = make_shared<long>(boost::any_cast<long>(m["destTTL"]));
    }
  }


  virtual ~ListCollectionPoliciesResponseBodyDataCentralizeConfig() = default;
};
class ListCollectionPoliciesResponseBodyDataPolicyConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<vector<string>> regions{};
  shared_ptr<string> resourceMode{};
  shared_ptr<map<string, boost::any>> resourceTags{};

  ListCollectionPoliciesResponseBodyDataPolicyConfig() {}

  explicit ListCollectionPoliciesResponseBodyDataPolicyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["instanceIds"] = boost::any(*instanceIds);
    }
    if (regions) {
      res["regions"] = boost::any(*regions);
    }
    if (resourceMode) {
      res["resourceMode"] = boost::any(*resourceMode);
    }
    if (resourceTags) {
      res["resourceTags"] = boost::any(*resourceTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceIds") != m.end() && !m["instanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("regions") != m.end() && !m["regions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["regions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["regions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceMode") != m.end() && !m["resourceMode"].empty()) {
      resourceMode = make_shared<string>(boost::any_cast<string>(m["resourceMode"]));
    }
    if (m.find("resourceTags") != m.end() && !m["resourceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["resourceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceTags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListCollectionPoliciesResponseBodyDataPolicyConfig() = default;
};
class ListCollectionPoliciesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ListCollectionPoliciesResponseBodyDataAttribute> attribute{};
  shared_ptr<ListCollectionPoliciesResponseBodyDataCentralizeConfig> centralizeConfig{};
  shared_ptr<bool> centralizeEnabled{};
  shared_ptr<string> dataCode{};
  shared_ptr<bool> enabled{};
  shared_ptr<ListCollectionPoliciesResponseBodyDataPolicyConfig> policyConfig{};
  shared_ptr<string> policyName{};
  shared_ptr<string> productCode{};

  ListCollectionPoliciesResponseBodyData() {}

  explicit ListCollectionPoliciesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      res["attribute"] = attribute ? boost::any(attribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (centralizeConfig) {
      res["centralizeConfig"] = centralizeConfig ? boost::any(centralizeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (centralizeEnabled) {
      res["centralizeEnabled"] = boost::any(*centralizeEnabled);
    }
    if (dataCode) {
      res["dataCode"] = boost::any(*dataCode);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (policyConfig) {
      res["policyConfig"] = policyConfig ? boost::any(policyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyName) {
      res["policyName"] = boost::any(*policyName);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["attribute"].type()) {
        ListCollectionPoliciesResponseBodyDataAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["attribute"]));
        attribute = make_shared<ListCollectionPoliciesResponseBodyDataAttribute>(model1);
      }
    }
    if (m.find("centralizeConfig") != m.end() && !m["centralizeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["centralizeConfig"].type()) {
        ListCollectionPoliciesResponseBodyDataCentralizeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["centralizeConfig"]));
        centralizeConfig = make_shared<ListCollectionPoliciesResponseBodyDataCentralizeConfig>(model1);
      }
    }
    if (m.find("centralizeEnabled") != m.end() && !m["centralizeEnabled"].empty()) {
      centralizeEnabled = make_shared<bool>(boost::any_cast<bool>(m["centralizeEnabled"]));
    }
    if (m.find("dataCode") != m.end() && !m["dataCode"].empty()) {
      dataCode = make_shared<string>(boost::any_cast<string>(m["dataCode"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("policyConfig") != m.end() && !m["policyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["policyConfig"].type()) {
        ListCollectionPoliciesResponseBodyDataPolicyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["policyConfig"]));
        policyConfig = make_shared<ListCollectionPoliciesResponseBodyDataPolicyConfig>(model1);
      }
    }
    if (m.find("policyName") != m.end() && !m["policyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["policyName"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
  }


  virtual ~ListCollectionPoliciesResponseBodyData() = default;
};
class ListCollectionPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentCount{};
  shared_ptr<vector<ListCollectionPoliciesResponseBodyData>> data{};
  shared_ptr<long> totalCount{};

  ListCollectionPoliciesResponseBody() {}

  explicit ListCollectionPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentCount) {
      res["currentCount"] = boost::any(*currentCount);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentCount") != m.end() && !m["currentCount"].empty()) {
      currentCount = make_shared<long>(boost::any_cast<long>(m["currentCount"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListCollectionPoliciesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCollectionPoliciesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCollectionPoliciesResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListCollectionPoliciesResponseBody() = default;
};
class ListCollectionPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCollectionPoliciesResponseBody> body{};

  ListCollectionPoliciesResponse() {}

  explicit ListCollectionPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCollectionPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCollectionPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCollectionPoliciesResponse() = default;
};
class ListConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListConfigRequest() {}

  explicit ListConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["configName"] = boost::any(*configName);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configName") != m.end() && !m["configName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["configName"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListConfigRequest() = default;
};
class ListConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> configs{};
  shared_ptr<long> count{};
  shared_ptr<long> total{};

  ListConfigResponseBody() {}

  explicit ListConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      res["configs"] = boost::any(*configs);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configs") != m.end() && !m["configs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["configs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["configs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      configs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListConfigResponseBody() = default;
};
class ListConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConfigResponseBody> body{};

  ListConfigResponse() {}

  explicit ListConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListConfigResponse() = default;
};
class ListConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<ConsumerGroup>> body{};

  ListConsumerGroupResponse() {}

  explicit ListConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<ConsumerGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConsumerGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<ConsumerGroup>>(expect1);
      }
    }
  }


  virtual ~ListConsumerGroupResponse() = default;
};
class ListDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListDashboardRequest() {}

  explicit ListDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListDashboardRequest() = default;
};
class ListDashboardResponseBodyDashboardItems : public Darabonba::Model {
public:
  shared_ptr<string> dashboardName{};
  shared_ptr<string> displayName{};

  ListDashboardResponseBodyDashboardItems() {}

  explicit ListDashboardResponseBodyDashboardItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboardName) {
      res["dashboardName"] = boost::any(*dashboardName);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dashboardName") != m.end() && !m["dashboardName"].empty()) {
      dashboardName = make_shared<string>(boost::any_cast<string>(m["dashboardName"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~ListDashboardResponseBodyDashboardItems() = default;
};
class ListDashboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDashboardResponseBodyDashboardItems>> dashboardItems{};
  shared_ptr<vector<string>> dashboards{};

  ListDashboardResponseBody() {}

  explicit ListDashboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboardItems) {
      vector<boost::any> temp1;
      for(auto item1:*dashboardItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dashboardItems"] = boost::any(temp1);
    }
    if (dashboards) {
      res["dashboards"] = boost::any(*dashboards);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dashboardItems") != m.end() && !m["dashboardItems"].empty()) {
      if (typeid(vector<boost::any>) == m["dashboardItems"].type()) {
        vector<ListDashboardResponseBodyDashboardItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dashboardItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDashboardResponseBodyDashboardItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dashboardItems = make_shared<vector<ListDashboardResponseBodyDashboardItems>>(expect1);
      }
    }
    if (m.find("dashboards") != m.end() && !m["dashboards"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dashboards"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dashboards"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dashboards = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDashboardResponseBody() = default;
};
class ListDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDashboardResponseBody> body{};

  ListDashboardResponse() {}

  explicit ListDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDashboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDashboardResponseBody>(model1);
      }
    }
  }


  virtual ~ListDashboardResponse() = default;
};
class ListDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListDomainsRequest() {}

  explicit ListDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListDomainsRequest() = default;
};
class ListDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> domains{};
  shared_ptr<long> total{};

  ListDomainsResponseBody() {}

  explicit ListDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (domains) {
      res["domains"] = boost::any(*domains);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("domains") != m.end() && !m["domains"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["domains"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["domains"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domains = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListDomainsResponseBody() = default;
};
class ListDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDomainsResponseBody> body{};

  ListDomainsResponse() {}

  explicit ListDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDomainsResponse() = default;
};
class ListETLsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListETLsRequest() {}

  explicit ListETLsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListETLsRequest() = default;
};
class ListETLsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ETL>> results{};
  shared_ptr<long> total{};

  ListETLsResponseBody() {}

  explicit ListETLsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["results"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("results") != m.end() && !m["results"].empty()) {
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<ETL> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ETL model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<ETL>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListETLsResponseBody() = default;
};
class ListETLsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListETLsResponseBody> body{};

  ListETLsResponse() {}

  explicit ListETLsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListETLsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListETLsResponseBody>(model1);
      }
    }
  }


  virtual ~ListETLsResponse() = default;
};
class ListExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<long> offset{};
  shared_ptr<long> sizs{};

  ListExternalStoreRequest() {}

  explicit ListExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (sizs) {
      res["sizs"] = boost::any(*sizs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("sizs") != m.end() && !m["sizs"].empty()) {
      sizs = make_shared<long>(boost::any_cast<long>(m["sizs"]));
    }
  }


  virtual ~ListExternalStoreRequest() = default;
};
class ListExternalStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> externalstores{};
  shared_ptr<long> total{};

  ListExternalStoreResponseBody() {}

  explicit ListExternalStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (externalstores) {
      res["externalstores"] = boost::any(*externalstores);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("externalstores") != m.end() && !m["externalstores"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["externalstores"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["externalstores"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      externalstores = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListExternalStoreResponseBody() = default;
};
class ListExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExternalStoreResponseBody> body{};

  ListExternalStoreResponse() {}

  explicit ListExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListExternalStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExternalStoreResponseBody>(model1);
      }
    }
  }


  virtual ~ListExternalStoreResponse() = default;
};
class ListLogStoresRequest : public Darabonba::Model {
public:
  shared_ptr<string> logstoreName{};
  shared_ptr<string> mode{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};
  shared_ptr<string> telemetryType{};

  ListLogStoresRequest() {}

  explicit ListLogStoresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (telemetryType) {
      res["telemetryType"] = boost::any(*telemetryType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("telemetryType") != m.end() && !m["telemetryType"].empty()) {
      telemetryType = make_shared<string>(boost::any_cast<string>(m["telemetryType"]));
    }
  }


  virtual ~ListLogStoresRequest() = default;
};
class ListLogStoresResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> logstores{};
  shared_ptr<long> total{};

  ListLogStoresResponseBody() {}

  explicit ListLogStoresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (logstores) {
      res["logstores"] = boost::any(*logstores);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("logstores") != m.end() && !m["logstores"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["logstores"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["logstores"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logstores = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListLogStoresResponseBody() = default;
};
class ListLogStoresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLogStoresResponseBody> body{};

  ListLogStoresResponse() {}

  explicit ListLogStoresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListLogStoresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogStoresResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogStoresResponse() = default;
};
class ListLogtailPipelineConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListLogtailPipelineConfigRequest() {}

  explicit ListLogtailPipelineConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["configName"] = boost::any(*configName);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configName") != m.end() && !m["configName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["configName"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListLogtailPipelineConfigRequest() = default;
};
class ListLogtailPipelineConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> configs{};
  shared_ptr<long> count{};
  shared_ptr<long> total{};

  ListLogtailPipelineConfigResponseBody() {}

  explicit ListLogtailPipelineConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      res["configs"] = boost::any(*configs);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configs") != m.end() && !m["configs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["configs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["configs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      configs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListLogtailPipelineConfigResponseBody() = default;
};
class ListLogtailPipelineConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLogtailPipelineConfigResponseBody> body{};

  ListLogtailPipelineConfigResponse() {}

  explicit ListLogtailPipelineConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListLogtailPipelineConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogtailPipelineConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogtailPipelineConfigResponse() = default;
};
class ListMachineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListMachineGroupRequest() {}

  explicit ListMachineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListMachineGroupRequest() = default;
};
class ListMachineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> machinegroups{};
  shared_ptr<long> total{};

  ListMachineGroupResponseBody() {}

  explicit ListMachineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (machinegroups) {
      res["machinegroups"] = boost::any(*machinegroups);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("machinegroups") != m.end() && !m["machinegroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machinegroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machinegroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machinegroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMachineGroupResponseBody() = default;
};
class ListMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMachineGroupResponseBody> body{};

  ListMachineGroupResponse() {}

  explicit ListMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMachineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMachineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListMachineGroupResponse() = default;
};
class ListMachinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListMachinesRequest() {}

  explicit ListMachinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListMachinesRequest() = default;
};
class ListMachinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<Machine>> machines{};
  shared_ptr<long> total{};

  ListMachinesResponseBody() {}

  explicit ListMachinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (machines) {
      vector<boost::any> temp1;
      for(auto item1:*machines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["machines"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("machines") != m.end() && !m["machines"].empty()) {
      if (typeid(vector<boost::any>) == m["machines"].type()) {
        vector<Machine> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["machines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Machine model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        machines = make_shared<vector<Machine>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMachinesResponseBody() = default;
};
class ListMachinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMachinesResponseBody> body{};

  ListMachinesResponse() {}

  explicit ListMachinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListMachinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMachinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMachinesResponse() = default;
};
class ListOSSExportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListOSSExportsRequest() {}

  explicit ListOSSExportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListOSSExportsRequest() = default;
};
class ListOSSExportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<OSSExport>> results{};
  shared_ptr<long> total{};

  ListOSSExportsResponseBody() {}

  explicit ListOSSExportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["results"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("results") != m.end() && !m["results"].empty()) {
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<OSSExport> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OSSExport model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<OSSExport>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListOSSExportsResponseBody() = default;
};
class ListOSSExportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOSSExportsResponseBody> body{};

  ListOSSExportsResponse() {}

  explicit ListOSSExportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOSSExportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOSSExportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOSSExportsResponse() = default;
};
class ListOSSHDFSExportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListOSSHDFSExportsRequest() {}

  explicit ListOSSHDFSExportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListOSSHDFSExportsRequest() = default;
};
class ListOSSHDFSExportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<OSSExport>> results{};
  shared_ptr<long> total{};

  ListOSSHDFSExportsResponseBody() {}

  explicit ListOSSHDFSExportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["results"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("results") != m.end() && !m["results"].empty()) {
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<OSSExport> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OSSExport model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<OSSExport>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListOSSHDFSExportsResponseBody() = default;
};
class ListOSSHDFSExportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOSSHDFSExportsResponseBody> body{};

  ListOSSHDFSExportsResponse() {}

  explicit ListOSSHDFSExportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOSSHDFSExportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOSSHDFSExportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOSSHDFSExportsResponse() = default;
};
class ListOSSIngestionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListOSSIngestionsRequest() {}

  explicit ListOSSIngestionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListOSSIngestionsRequest() = default;
};
class ListOSSIngestionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<OSSIngestion>> results{};
  shared_ptr<long> total{};

  ListOSSIngestionsResponseBody() {}

  explicit ListOSSIngestionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["results"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("results") != m.end() && !m["results"].empty()) {
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<OSSIngestion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OSSIngestion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<OSSIngestion>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListOSSIngestionsResponseBody() = default;
};
class ListOSSIngestionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOSSIngestionsResponseBody> body{};

  ListOSSIngestionsResponse() {}

  explicit ListOSSIngestionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOSSIngestionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOSSIngestionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOSSIngestionsResponse() = default;
};
class ListProjectRequest : public Darabonba::Model {
public:
  shared_ptr<bool> fetchQuota{};
  shared_ptr<long> offset{};
  shared_ptr<string> projectName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> size{};

  ListProjectRequest() {}

  explicit ListProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fetchQuota) {
      res["fetchQuota"] = boost::any(*fetchQuota);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fetchQuota") != m.end() && !m["fetchQuota"].empty()) {
      fetchQuota = make_shared<bool>(boost::any_cast<bool>(m["fetchQuota"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListProjectRequest() = default;
};
class ListProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<Project>> projects{};
  shared_ptr<long> total{};

  ListProjectResponseBody() {}

  explicit ListProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["projects"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("projects") != m.end() && !m["projects"].empty()) {
      if (typeid(vector<boost::any>) == m["projects"].type()) {
        vector<Project> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Project model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<Project>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProjectResponseBody() = default;
};
class ListProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectResponseBody> body{};

  ListProjectResponse() {}

  explicit ListProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectResponse() = default;
};
class ListSavedSearchRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListSavedSearchRequest() {}

  explicit ListSavedSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListSavedSearchRequest() = default;
};
class ListSavedSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<SavedSearch>> savedsearchItems{};
  shared_ptr<long> total{};

  ListSavedSearchResponseBody() {}

  explicit ListSavedSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (savedsearchItems) {
      vector<boost::any> temp1;
      for(auto item1:*savedsearchItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["savedsearchItems"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("savedsearchItems") != m.end() && !m["savedsearchItems"].empty()) {
      if (typeid(vector<boost::any>) == m["savedsearchItems"].type()) {
        vector<SavedSearch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["savedsearchItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SavedSearch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        savedsearchItems = make_shared<vector<SavedSearch>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListSavedSearchResponseBody() = default;
};
class ListSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSavedSearchResponseBody> body{};

  ListSavedSearchResponse() {}

  explicit ListSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSavedSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSavedSearchResponseBody>(model1);
      }
    }
  }


  virtual ~ListSavedSearchResponse() = default;
};
class ListScheduledSQLsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListScheduledSQLsRequest() {}

  explicit ListScheduledSQLsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListScheduledSQLsRequest() = default;
};
class ListScheduledSQLsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ScheduledSQL>> results{};
  shared_ptr<long> total{};

  ListScheduledSQLsResponseBody() {}

  explicit ListScheduledSQLsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["results"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("results") != m.end() && !m["results"].empty()) {
      if (typeid(vector<boost::any>) == m["results"].type()) {
        vector<ScheduledSQL> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScheduledSQL model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<ScheduledSQL>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListScheduledSQLsResponseBody() = default;
};
class ListScheduledSQLsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListScheduledSQLsResponseBody> body{};

  ListScheduledSQLsResponse() {}

  explicit ListScheduledSQLsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListScheduledSQLsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListScheduledSQLsResponseBody>(model1);
      }
    }
  }


  virtual ~ListScheduledSQLsResponse() = default;
};
class ListShardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Shard>> body{};

  ListShardsResponse() {}

  explicit ListShardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Shard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Shard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Shard>>(expect1);
      }
    }
  }


  virtual ~ListShardsResponse() = default;
};
class ListShipperResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> shipper{};
  shared_ptr<long> total{};

  ListShipperResponseBody() {}

  explicit ListShipperResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (shipper) {
      res["shipper"] = boost::any(*shipper);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("shipper") != m.end() && !m["shipper"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["shipper"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["shipper"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      shipper = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListShipperResponseBody() = default;
};
class ListShipperResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListShipperResponseBody> body{};

  ListShipperResponse() {}

  explicit ListShipperResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListShipperResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListShipperResponseBody>(model1);
      }
    }
  }


  virtual ~ListShipperResponse() = default;
};
class ListStoreViewsRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};
  shared_ptr<string> storeType{};

  ListStoreViewsRequest() {}

  explicit ListStoreViewsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~ListStoreViewsRequest() = default;
};
class ListStoreViewsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> storeviews{};
  shared_ptr<long> total{};

  ListStoreViewsResponseBody() {}

  explicit ListStoreViewsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (storeviews) {
      res["storeviews"] = boost::any(*storeviews);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("storeviews") != m.end() && !m["storeviews"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["storeviews"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["storeviews"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      storeviews = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListStoreViewsResponseBody() = default;
};
class ListStoreViewsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListStoreViewsResponseBody> body{};

  ListStoreViewsResponse() {}

  explicit ListStoreViewsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListStoreViewsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListStoreViewsResponseBody>(model1);
      }
    }
  }


  virtual ~ListStoreViewsResponse() = default;
};
class ListTagResourcesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTags() {}

  explicit ListTagResourcesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListTagResourcesRequestTags() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTags>> tags{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListTagResourcesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTagResourcesRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceIdShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagsShrink{};

  ListTagResourcesShrinkRequest() {}

  explicit ListTagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIdShrink) {
      res["resourceId"] = boost::any(*resourceIdShrink);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceIdShrink = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
  }


  virtual ~ListTagResourcesShrinkRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["tagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
    if (m.find("tagValue") != m.end() && !m["tagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["tagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("tagResources") != m.end() && !m["tagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["tagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class MergeShardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Shard>> body{};

  MergeShardResponse() {}

  explicit MergeShardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Shard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Shard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Shard>>(expect1);
      }
    }
  }


  virtual ~MergeShardResponse() = default;
};
class OpenSlsServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  OpenSlsServiceResponse() {}

  explicit OpenSlsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~OpenSlsServiceResponse() = default;
};
class PutAnnotationDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> annotationdataId{};
  shared_ptr<MLDataParam> mlDataParam{};
  shared_ptr<vector<map<string, string>>> rawLog{};

  PutAnnotationDataRequest() {}

  explicit PutAnnotationDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annotationdataId) {
      res["annotationdataId"] = boost::any(*annotationdataId);
    }
    if (mlDataParam) {
      res["mlDataParam"] = mlDataParam ? boost::any(mlDataParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rawLog) {
      res["rawLog"] = boost::any(*rawLog);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("annotationdataId") != m.end() && !m["annotationdataId"].empty()) {
      annotationdataId = make_shared<string>(boost::any_cast<string>(m["annotationdataId"]));
    }
    if (m.find("mlDataParam") != m.end() && !m["mlDataParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["mlDataParam"].type()) {
        MLDataParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["mlDataParam"]));
        mlDataParam = make_shared<MLDataParam>(model1);
      }
    }
    if (m.find("rawLog") != m.end() && !m["rawLog"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["rawLog"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rawLog"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      rawLog = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~PutAnnotationDataRequest() = default;
};
class PutAnnotationDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PutAnnotationDataResponse() {}

  explicit PutAnnotationDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~PutAnnotationDataResponse() = default;
};
class PutProjectPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  PutProjectPolicyRequest() {}

  explicit PutProjectPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~PutProjectPolicyRequest() = default;
};
class PutProjectPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PutProjectPolicyResponse() {}

  explicit PutProjectPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~PutProjectPolicyResponse() = default;
};
class PutProjectTransferAccelerationRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  PutProjectTransferAccelerationRequest() {}

  explicit PutProjectTransferAccelerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
  }


  virtual ~PutProjectTransferAccelerationRequest() = default;
};
class PutProjectTransferAccelerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PutProjectTransferAccelerationResponse() {}

  explicit PutProjectTransferAccelerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~PutProjectTransferAccelerationResponse() = default;
};
class PutWebtrackingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> logs{};
  shared_ptr<string> source{};
  shared_ptr<map<string, string>> tags{};
  shared_ptr<string> topic{};

  PutWebtrackingRequest() {}

  explicit PutWebtrackingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logs) {
      res["__logs__"] = boost::any(*logs);
    }
    if (source) {
      res["__source__"] = boost::any(*source);
    }
    if (tags) {
      res["__tags__"] = boost::any(*tags);
    }
    if (topic) {
      res["__topic__"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("__logs__") != m.end() && !m["__logs__"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["__logs__"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["__logs__"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      logs = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("__source__") != m.end() && !m["__source__"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["__source__"]));
    }
    if (m.find("__tags__") != m.end() && !m["__tags__"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["__tags__"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("__topic__") != m.end() && !m["__topic__"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["__topic__"]));
    }
  }


  virtual ~PutWebtrackingRequest() = default;
};
class PutWebtrackingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PutWebtrackingResponse() {}

  explicit PutWebtrackingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~PutWebtrackingResponse() = default;
};
class QueryMLServiceResultsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowBuiltin{};
  shared_ptr<MLServiceAnalysisParam> body{};

  QueryMLServiceResultsRequest() {}

  explicit QueryMLServiceResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowBuiltin) {
      res["allowBuiltin"] = boost::any(*allowBuiltin);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("allowBuiltin") != m.end() && !m["allowBuiltin"].empty()) {
      allowBuiltin = make_shared<bool>(boost::any_cast<bool>(m["allowBuiltin"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLServiceAnalysisParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLServiceAnalysisParam>(model1);
      }
    }
  }


  virtual ~QueryMLServiceResultsRequest() = default;
};
class QueryMLServiceResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> data{};
  shared_ptr<map<string, string>> status{};

  QueryMLServiceResultsResponseBody() {}

  explicit QueryMLServiceResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["status"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      status = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~QueryMLServiceResultsResponseBody() = default;
};
class QueryMLServiceResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMLServiceResultsResponseBody> body{};

  QueryMLServiceResultsResponse() {}

  explicit QueryMLServiceResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMLServiceResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMLServiceResultsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMLServiceResultsResponse() = default;
};
class RefreshTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> accessTokenExpirationTime{};
  shared_ptr<string> ticket{};

  RefreshTokenRequest() {}

  explicit RefreshTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTokenExpirationTime) {
      res["accessTokenExpirationTime"] = boost::any(*accessTokenExpirationTime);
    }
    if (ticket) {
      res["ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessTokenExpirationTime") != m.end() && !m["accessTokenExpirationTime"].empty()) {
      accessTokenExpirationTime = make_shared<long>(boost::any_cast<long>(m["accessTokenExpirationTime"]));
    }
    if (m.find("ticket") != m.end() && !m["ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["ticket"]));
    }
  }


  virtual ~RefreshTokenRequest() = default;
};
class RefreshTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};

  RefreshTokenResponseBody() {}

  explicit RefreshTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["accessToken"] = boost::any(*accessToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessToken") != m.end() && !m["accessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["accessToken"]));
    }
  }


  virtual ~RefreshTokenResponseBody() = default;
};
class RefreshTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshTokenResponseBody> body{};

  RefreshTokenResponse() {}

  explicit RefreshTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefreshTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshTokenResponse() = default;
};
class RemoveConfigFromMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  RemoveConfigFromMachineGroupResponse() {}

  explicit RemoveConfigFromMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~RemoveConfigFromMachineGroupResponse() = default;
};
class SplitShardRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<long> shardCount{};

  SplitShardRequest() {}

  explicit SplitShardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (shardCount) {
      res["shardCount"] = boost::any(*shardCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("shardCount") != m.end() && !m["shardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["shardCount"]));
    }
  }


  virtual ~SplitShardRequest() = default;
};
class SplitShardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Shard>> body{};

  SplitShardResponse() {}

  explicit SplitShardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Shard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Shard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Shard>>(expect1);
      }
    }
  }


  virtual ~SplitShardResponse() = default;
};
class StartETLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StartETLResponse() {}

  explicit StartETLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StartETLResponse() = default;
};
class StartOSSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StartOSSExportResponse() {}

  explicit StartOSSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StartOSSExportResponse() = default;
};
class StartOSSHDFSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StartOSSHDFSExportResponse() {}

  explicit StartOSSHDFSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StartOSSHDFSExportResponse() = default;
};
class StartOSSIngestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StartOSSIngestionResponse() {}

  explicit StartOSSIngestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StartOSSIngestionResponse() = default;
};
class StopETLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StopETLResponse() {}

  explicit StopETLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StopETLResponse() = default;
};
class StopOSSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StopOSSExportResponse() {}

  explicit StopOSSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StopOSSExportResponse() = default;
};
class StopOSSHDFSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StopOSSHDFSExportResponse() {}

  explicit StopOSSHDFSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StopOSSHDFSExportResponse() = default;
};
class StopOSSIngestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  StopOSSIngestionResponse() {}

  explicit StopOSSIngestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~StopOSSIngestionResponse() = default;
};
class TagResourcesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTags() {}

  explicit TagResourcesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~TagResourcesRequestTags() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTags>> tags{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<TagResourcesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<TagResourcesRequestTags>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tags{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["all"] = boost::any(*all);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all") != m.end() && !m["all"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["all"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateAlertRequest : public Darabonba::Model {
public:
  shared_ptr<AlertConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<Schedule> schedule{};

  UpdateAlertRequest() {}

  explicit UpdateAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        AlertConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<AlertConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
  }


  virtual ~UpdateAlertRequest() = default;
};
class UpdateAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateAlertResponse() {}

  explicit UpdateAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateAlertResponse() = default;
};
class UpdateAnnotationDataSetRequest : public Darabonba::Model {
public:
  shared_ptr<MLDataSetParam> body{};

  UpdateAnnotationDataSetRequest() {}

  explicit UpdateAnnotationDataSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLDataSetParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLDataSetParam>(model1);
      }
    }
  }


  virtual ~UpdateAnnotationDataSetRequest() = default;
};
class UpdateAnnotationDataSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateAnnotationDataSetResponse() {}

  explicit UpdateAnnotationDataSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateAnnotationDataSetResponse() = default;
};
class UpdateAnnotationLabelRequest : public Darabonba::Model {
public:
  shared_ptr<MLLabelParam> body{};

  UpdateAnnotationLabelRequest() {}

  explicit UpdateAnnotationLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MLLabelParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MLLabelParam>(model1);
      }
    }
  }


  virtual ~UpdateAnnotationLabelRequest() = default;
};
class UpdateAnnotationLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateAnnotationLabelResponse() {}

  explicit UpdateAnnotationLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateAnnotationLabelResponse() = default;
};
class UpdateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<LogtailConfig> body{};

  UpdateConfigRequest() {}

  explicit UpdateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        LogtailConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogtailConfig>(model1);
      }
    }
  }


  virtual ~UpdateConfigRequest() = default;
};
class UpdateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateConfigResponse() {}

  explicit UpdateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateConfigResponse() = default;
};
class UpdateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> order{};
  shared_ptr<long> timeout{};

  UpdateConsumerGroupRequest() {}

  explicit UpdateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<bool>(boost::any_cast<bool>(m["order"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~UpdateConsumerGroupRequest() = default;
};
class UpdateConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateConsumerGroupResponse() {}

  explicit UpdateConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateConsumerGroupResponse() = default;
};
class UpdateDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> attribute{};
  shared_ptr<vector<Chart>> charts{};
  shared_ptr<string> dashboardName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  UpdateDashboardRequest() {}

  explicit UpdateDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (charts) {
      vector<boost::any> temp1;
      for(auto item1:*charts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["charts"] = boost::any(temp1);
    }
    if (dashboardName) {
      res["dashboardName"] = boost::any(*dashboardName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["attribute"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attribute = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("charts") != m.end() && !m["charts"].empty()) {
      if (typeid(vector<boost::any>) == m["charts"].type()) {
        vector<Chart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["charts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Chart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        charts = make_shared<vector<Chart>>(expect1);
      }
    }
    if (m.find("dashboardName") != m.end() && !m["dashboardName"].empty()) {
      dashboardName = make_shared<string>(boost::any_cast<string>(m["dashboardName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~UpdateDashboardRequest() = default;
};
class UpdateDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateDashboardResponse() {}

  explicit UpdateDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateDashboardResponse() = default;
};
class UpdateETLRequest : public Darabonba::Model {
public:
  shared_ptr<ETLConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  UpdateETLRequest() {}

  explicit UpdateETLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        ETLConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<ETLConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~UpdateETLRequest() = default;
};
class UpdateETLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateETLResponse() {}

  explicit UpdateETLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateETLResponse() = default;
};
class UpdateIndexRequestLine : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<vector<string>> excludeKeys{};
  shared_ptr<vector<string>> includeKeys{};
  shared_ptr<vector<string>> token{};

  UpdateIndexRequestLine() {}

  explicit UpdateIndexRequestLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (excludeKeys) {
      res["exclude_keys"] = boost::any(*excludeKeys);
    }
    if (includeKeys) {
      res["include_keys"] = boost::any(*includeKeys);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("exclude_keys") != m.end() && !m["exclude_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["exclude_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["exclude_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("include_keys") != m.end() && !m["include_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["include_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["include_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      includeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateIndexRequestLine() = default;
};
class UpdateIndexRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, KeysValue>> keys{};
  shared_ptr<UpdateIndexRequestLine> line{};
  shared_ptr<bool> logReduce{};
  shared_ptr<vector<string>> logReduceBlackList{};
  shared_ptr<vector<string>> logReduceWhiteList{};
  shared_ptr<long> maxTextLen{};
  shared_ptr<long> ttl{};

  UpdateIndexRequest() {}

  explicit UpdateIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      map<string, boost::any> temp1;
      for(auto item1:*keys){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["keys"] = boost::any(temp1);
    }
    if (line) {
      res["line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logReduce) {
      res["log_reduce"] = boost::any(*logReduce);
    }
    if (logReduceBlackList) {
      res["log_reduce_black_list"] = boost::any(*logReduceBlackList);
    }
    if (logReduceWhiteList) {
      res["log_reduce_white_list"] = boost::any(*logReduceWhiteList);
    }
    if (maxTextLen) {
      res["max_text_len"] = boost::any(*maxTextLen);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["keys"].type()) {
        map<string, KeysValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["keys"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            KeysValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        keys = make_shared<map<string, KeysValue>>(expect1);
      }
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      if (typeid(map<string, boost::any>) == m["line"].type()) {
        UpdateIndexRequestLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["line"]));
        line = make_shared<UpdateIndexRequestLine>(model1);
      }
    }
    if (m.find("log_reduce") != m.end() && !m["log_reduce"].empty()) {
      logReduce = make_shared<bool>(boost::any_cast<bool>(m["log_reduce"]));
    }
    if (m.find("log_reduce_black_list") != m.end() && !m["log_reduce_black_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_black_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_black_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("log_reduce_white_list") != m.end() && !m["log_reduce_white_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_white_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_white_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("max_text_len") != m.end() && !m["max_text_len"].empty()) {
      maxTextLen = make_shared<long>(boost::any_cast<long>(m["max_text_len"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~UpdateIndexRequest() = default;
};
class UpdateIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateIndexResponse() {}

  explicit UpdateIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateIndexResponse() = default;
};
class UpdateLogStoreRequest : public Darabonba::Model {
public:
  shared_ptr<bool> appendMeta{};
  shared_ptr<bool> autoSplit{};
  shared_ptr<bool> enableTracking{};
  shared_ptr<EncryptConf> encryptConf{};
  shared_ptr<long> hotTtl{};
  shared_ptr<long> infrequentAccessTTL{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> maxSplitShard{};
  shared_ptr<string> mode{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> telemetryType{};
  shared_ptr<long> ttl{};

  UpdateLogStoreRequest() {}

  explicit UpdateLogStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendMeta) {
      res["appendMeta"] = boost::any(*appendMeta);
    }
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (enableTracking) {
      res["enable_tracking"] = boost::any(*enableTracking);
    }
    if (encryptConf) {
      res["encrypt_conf"] = encryptConf ? boost::any(encryptConf->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hotTtl) {
      res["hot_ttl"] = boost::any(*hotTtl);
    }
    if (infrequentAccessTTL) {
      res["infrequentAccessTTL"] = boost::any(*infrequentAccessTTL);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (maxSplitShard) {
      res["maxSplitShard"] = boost::any(*maxSplitShard);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (shardCount) {
      res["shardCount"] = boost::any(*shardCount);
    }
    if (telemetryType) {
      res["telemetryType"] = boost::any(*telemetryType);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appendMeta") != m.end() && !m["appendMeta"].empty()) {
      appendMeta = make_shared<bool>(boost::any_cast<bool>(m["appendMeta"]));
    }
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<bool>(boost::any_cast<bool>(m["autoSplit"]));
    }
    if (m.find("enable_tracking") != m.end() && !m["enable_tracking"].empty()) {
      enableTracking = make_shared<bool>(boost::any_cast<bool>(m["enable_tracking"]));
    }
    if (m.find("encrypt_conf") != m.end() && !m["encrypt_conf"].empty()) {
      if (typeid(map<string, boost::any>) == m["encrypt_conf"].type()) {
        EncryptConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encrypt_conf"]));
        encryptConf = make_shared<EncryptConf>(model1);
      }
    }
    if (m.find("hot_ttl") != m.end() && !m["hot_ttl"].empty()) {
      hotTtl = make_shared<long>(boost::any_cast<long>(m["hot_ttl"]));
    }
    if (m.find("infrequentAccessTTL") != m.end() && !m["infrequentAccessTTL"].empty()) {
      infrequentAccessTTL = make_shared<long>(boost::any_cast<long>(m["infrequentAccessTTL"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("maxSplitShard") != m.end() && !m["maxSplitShard"].empty()) {
      maxSplitShard = make_shared<long>(boost::any_cast<long>(m["maxSplitShard"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("shardCount") != m.end() && !m["shardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["shardCount"]));
    }
    if (m.find("telemetryType") != m.end() && !m["telemetryType"].empty()) {
      telemetryType = make_shared<string>(boost::any_cast<string>(m["telemetryType"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~UpdateLogStoreRequest() = default;
};
class UpdateLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateLogStoreResponse() {}

  explicit UpdateLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateLogStoreResponse() = default;
};
class UpdateLogStoreMeteringModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> meteringMode{};

  UpdateLogStoreMeteringModeRequest() {}

  explicit UpdateLogStoreMeteringModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meteringMode) {
      res["meteringMode"] = boost::any(*meteringMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("meteringMode") != m.end() && !m["meteringMode"].empty()) {
      meteringMode = make_shared<string>(boost::any_cast<string>(m["meteringMode"]));
    }
  }


  virtual ~UpdateLogStoreMeteringModeRequest() = default;
};
class UpdateLogStoreMeteringModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateLogStoreMeteringModeResponse() {}

  explicit UpdateLogStoreMeteringModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateLogStoreMeteringModeResponse() = default;
};
class UpdateLoggingRequestLoggingDetails : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> type{};

  UpdateLoggingRequestLoggingDetails() {}

  explicit UpdateLoggingRequestLoggingDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateLoggingRequestLoggingDetails() = default;
};
class UpdateLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateLoggingRequestLoggingDetails>> loggingDetails{};
  shared_ptr<string> loggingProject{};

  UpdateLoggingRequest() {}

  explicit UpdateLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loggingDetails) {
      vector<boost::any> temp1;
      for(auto item1:*loggingDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loggingDetails"] = boost::any(temp1);
    }
    if (loggingProject) {
      res["loggingProject"] = boost::any(*loggingProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("loggingDetails") != m.end() && !m["loggingDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["loggingDetails"].type()) {
        vector<UpdateLoggingRequestLoggingDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loggingDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateLoggingRequestLoggingDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loggingDetails = make_shared<vector<UpdateLoggingRequestLoggingDetails>>(expect1);
      }
    }
    if (m.find("loggingProject") != m.end() && !m["loggingProject"].empty()) {
      loggingProject = make_shared<string>(boost::any_cast<string>(m["loggingProject"]));
    }
  }


  virtual ~UpdateLoggingRequest() = default;
};
class UpdateLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateLoggingResponse() {}

  explicit UpdateLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateLoggingResponse() = default;
};
class UpdateLogtailPipelineConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> aggregators{};
  shared_ptr<string> configName{};
  shared_ptr<vector<map<string, boost::any>>> flushers{};
  shared_ptr<map<string, boost::any>> global{};
  shared_ptr<vector<map<string, boost::any>>> inputs{};
  shared_ptr<string> logSample{};
  shared_ptr<vector<map<string, boost::any>>> processors{};

  UpdateLogtailPipelineConfigRequest() {}

  explicit UpdateLogtailPipelineConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregators) {
      res["aggregators"] = boost::any(*aggregators);
    }
    if (configName) {
      res["configName"] = boost::any(*configName);
    }
    if (flushers) {
      res["flushers"] = boost::any(*flushers);
    }
    if (global) {
      res["global"] = boost::any(*global);
    }
    if (inputs) {
      res["inputs"] = boost::any(*inputs);
    }
    if (logSample) {
      res["logSample"] = boost::any(*logSample);
    }
    if (processors) {
      res["processors"] = boost::any(*processors);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aggregators") != m.end() && !m["aggregators"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["aggregators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["aggregators"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      aggregators = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("configName") != m.end() && !m["configName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["configName"]));
    }
    if (m.find("flushers") != m.end() && !m["flushers"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["flushers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["flushers"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      flushers = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("global") != m.end() && !m["global"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["global"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      global = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("inputs") != m.end() && !m["inputs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["inputs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["inputs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      inputs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("logSample") != m.end() && !m["logSample"].empty()) {
      logSample = make_shared<string>(boost::any_cast<string>(m["logSample"]));
    }
    if (m.find("processors") != m.end() && !m["processors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["processors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["processors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      processors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~UpdateLogtailPipelineConfigRequest() = default;
};
class UpdateLogtailPipelineConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateLogtailPipelineConfigResponse() {}

  explicit UpdateLogtailPipelineConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateLogtailPipelineConfigResponse() = default;
};
class UpdateMachineGroupRequestGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> externalName{};
  shared_ptr<string> groupTopic{};

  UpdateMachineGroupRequestGroupAttribute() {}

  explicit UpdateMachineGroupRequestGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalName) {
      res["externalName"] = boost::any(*externalName);
    }
    if (groupTopic) {
      res["groupTopic"] = boost::any(*groupTopic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalName") != m.end() && !m["externalName"].empty()) {
      externalName = make_shared<string>(boost::any_cast<string>(m["externalName"]));
    }
    if (m.find("groupTopic") != m.end() && !m["groupTopic"].empty()) {
      groupTopic = make_shared<string>(boost::any_cast<string>(m["groupTopic"]));
    }
  }


  virtual ~UpdateMachineGroupRequestGroupAttribute() = default;
};
class UpdateMachineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateMachineGroupRequestGroupAttribute> groupAttribute{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> machineIdentifyType{};
  shared_ptr<vector<string>> machineList{};

  UpdateMachineGroupRequest() {}

  explicit UpdateMachineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupAttribute) {
      res["groupAttribute"] = groupAttribute ? boost::any(groupAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (machineIdentifyType) {
      res["machineIdentifyType"] = boost::any(*machineIdentifyType);
    }
    if (machineList) {
      res["machineList"] = boost::any(*machineList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupAttribute") != m.end() && !m["groupAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupAttribute"].type()) {
        UpdateMachineGroupRequestGroupAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupAttribute"]));
        groupAttribute = make_shared<UpdateMachineGroupRequestGroupAttribute>(model1);
      }
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("machineIdentifyType") != m.end() && !m["machineIdentifyType"].empty()) {
      machineIdentifyType = make_shared<string>(boost::any_cast<string>(m["machineIdentifyType"]));
    }
    if (m.find("machineList") != m.end() && !m["machineList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machineList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machineList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machineList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateMachineGroupRequest() = default;
};
class UpdateMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateMachineGroupResponse() {}

  explicit UpdateMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateMachineGroupResponse() = default;
};
class UpdateMachineGroupMachineRequest : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<vector<string>> body{};

  UpdateMachineGroupMachineRequest() {}

  explicit UpdateMachineGroupMachineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      body = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateMachineGroupMachineRequest() = default;
};
class UpdateMachineGroupMachineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateMachineGroupMachineResponse() {}

  explicit UpdateMachineGroupMachineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateMachineGroupMachineResponse() = default;
};
class UpdateMetricStoreMeteringModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> meteringMode{};

  UpdateMetricStoreMeteringModeRequest() {}

  explicit UpdateMetricStoreMeteringModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meteringMode) {
      res["meteringMode"] = boost::any(*meteringMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("meteringMode") != m.end() && !m["meteringMode"].empty()) {
      meteringMode = make_shared<string>(boost::any_cast<string>(m["meteringMode"]));
    }
  }


  virtual ~UpdateMetricStoreMeteringModeRequest() = default;
};
class UpdateMetricStoreMeteringModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateMetricStoreMeteringModeResponse() {}

  explicit UpdateMetricStoreMeteringModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateMetricStoreMeteringModeResponse() = default;
};
class UpdateOSSExportRequest : public Darabonba::Model {
public:
  shared_ptr<OSSExportConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  UpdateOSSExportRequest() {}

  explicit UpdateOSSExportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        OSSExportConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<OSSExportConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~UpdateOSSExportRequest() = default;
};
class UpdateOSSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateOSSExportResponse() {}

  explicit UpdateOSSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateOSSExportResponse() = default;
};
class UpdateOSSHDFSExportRequest : public Darabonba::Model {
public:
  shared_ptr<OSSExportConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  UpdateOSSHDFSExportRequest() {}

  explicit UpdateOSSHDFSExportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        OSSExportConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<OSSExportConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~UpdateOSSHDFSExportRequest() = default;
};
class UpdateOSSHDFSExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateOSSHDFSExportResponse() {}

  explicit UpdateOSSHDFSExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateOSSHDFSExportResponse() = default;
};
class UpdateOSSIngestionRequest : public Darabonba::Model {
public:
  shared_ptr<OSSIngestionConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<Schedule> schedule{};

  UpdateOSSIngestionRequest() {}

  explicit UpdateOSSIngestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        OSSIngestionConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<OSSIngestionConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
  }


  virtual ~UpdateOSSIngestionRequest() = default;
};
class UpdateOSSIngestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateOSSIngestionResponse() {}

  explicit UpdateOSSIngestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateOSSIngestionResponse() = default;
};
class UpdateOssExternalStoreRequestParameterColumns : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateOssExternalStoreRequestParameterColumns() {}

  explicit UpdateOssExternalStoreRequestParameterColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateOssExternalStoreRequestParameterColumns() = default;
};
class UpdateOssExternalStoreRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> accessid{};
  shared_ptr<string> accesskey{};
  shared_ptr<string> bucket{};
  shared_ptr<vector<UpdateOssExternalStoreRequestParameterColumns>> columns{};
  shared_ptr<string> endpoint{};
  shared_ptr<vector<string>> objects{};

  UpdateOssExternalStoreRequestParameter() {}

  explicit UpdateOssExternalStoreRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessid) {
      res["accessid"] = boost::any(*accessid);
    }
    if (accesskey) {
      res["accesskey"] = boost::any(*accesskey);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columns"] = boost::any(temp1);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (objects) {
      res["objects"] = boost::any(*objects);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessid") != m.end() && !m["accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["accessid"]));
    }
    if (m.find("accesskey") != m.end() && !m["accesskey"].empty()) {
      accesskey = make_shared<string>(boost::any_cast<string>(m["accesskey"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<UpdateOssExternalStoreRequestParameterColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateOssExternalStoreRequestParameterColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<UpdateOssExternalStoreRequestParameterColumns>>(expect1);
      }
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("objects") != m.end() && !m["objects"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["objects"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["objects"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objects = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateOssExternalStoreRequestParameter() = default;
};
class UpdateOssExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<UpdateOssExternalStoreRequestParameter> parameter{};
  shared_ptr<string> storeType{};

  UpdateOssExternalStoreRequest() {}

  explicit UpdateOssExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        UpdateOssExternalStoreRequestParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<UpdateOssExternalStoreRequestParameter>(model1);
      }
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~UpdateOssExternalStoreRequest() = default;
};
class UpdateOssExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateOssExternalStoreResponse() {}

  explicit UpdateOssExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateOssExternalStoreResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class UpdateRdsExternalStoreRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> db{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> password{};
  shared_ptr<string> port{};
  shared_ptr<string> region{};
  shared_ptr<string> table{};
  shared_ptr<string> username{};
  shared_ptr<string> vpcId{};

  UpdateRdsExternalStoreRequestParameter() {}

  explicit UpdateRdsExternalStoreRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (db) {
      res["db"] = boost::any(*db);
    }
    if (host) {
      res["host"] = boost::any(*host);
    }
    if (instanceId) {
      res["instance-id"] = boost::any(*instanceId);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vpcId) {
      res["vpc-id"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("db") != m.end() && !m["db"].empty()) {
      db = make_shared<string>(boost::any_cast<string>(m["db"]));
    }
    if (m.find("host") != m.end() && !m["host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["host"]));
    }
    if (m.find("instance-id") != m.end() && !m["instance-id"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instance-id"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["port"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vpc-id") != m.end() && !m["vpc-id"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpc-id"]));
    }
  }


  virtual ~UpdateRdsExternalStoreRequestParameter() = default;
};
class UpdateRdsExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<UpdateRdsExternalStoreRequestParameter> parameter{};
  shared_ptr<string> storeType{};

  UpdateRdsExternalStoreRequest() {}

  explicit UpdateRdsExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        UpdateRdsExternalStoreRequestParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<UpdateRdsExternalStoreRequestParameter>(model1);
      }
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~UpdateRdsExternalStoreRequest() = default;
};
class UpdateRdsExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateRdsExternalStoreResponse() {}

  explicit UpdateRdsExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateRdsExternalStoreResponse() = default;
};
class UpdateSavedSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> logstore{};
  shared_ptr<string> savedsearchName{};
  shared_ptr<string> searchQuery{};
  shared_ptr<string> topic{};

  UpdateSavedSearchRequest() {}

  explicit UpdateSavedSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (savedsearchName) {
      res["savedsearchName"] = boost::any(*savedsearchName);
    }
    if (searchQuery) {
      res["searchQuery"] = boost::any(*searchQuery);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("savedsearchName") != m.end() && !m["savedsearchName"].empty()) {
      savedsearchName = make_shared<string>(boost::any_cast<string>(m["savedsearchName"]));
    }
    if (m.find("searchQuery") != m.end() && !m["searchQuery"].empty()) {
      searchQuery = make_shared<string>(boost::any_cast<string>(m["searchQuery"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~UpdateSavedSearchRequest() = default;
};
class UpdateSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateSavedSearchResponse() {}

  explicit UpdateSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateSavedSearchResponse() = default;
};
class UpdateScheduledSQLRequest : public Darabonba::Model {
public:
  shared_ptr<ScheduledSQLConfiguration> configuration{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<Schedule> schedule{};

  UpdateScheduledSQLRequest() {}

  explicit UpdateScheduledSQLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configuration") != m.end() && !m["configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["configuration"].type()) {
        ScheduledSQLConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["configuration"]));
        configuration = make_shared<ScheduledSQLConfiguration>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        Schedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<Schedule>(model1);
      }
    }
  }


  virtual ~UpdateScheduledSQLRequest() = default;
};
class UpdateScheduledSQLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateScheduledSQLResponse() {}

  explicit UpdateScheduledSQLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateScheduledSQLResponse() = default;
};
class UpdateSqlInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> cu{};
  shared_ptr<bool> useAsDefault{};

  UpdateSqlInstanceRequest() {}

  explicit UpdateSqlInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cu) {
      res["cu"] = boost::any(*cu);
    }
    if (useAsDefault) {
      res["useAsDefault"] = boost::any(*useAsDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cu") != m.end() && !m["cu"].empty()) {
      cu = make_shared<long>(boost::any_cast<long>(m["cu"]));
    }
    if (m.find("useAsDefault") != m.end() && !m["useAsDefault"].empty()) {
      useAsDefault = make_shared<bool>(boost::any_cast<bool>(m["useAsDefault"]));
    }
  }


  virtual ~UpdateSqlInstanceRequest() = default;
};
class UpdateSqlInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateSqlInstanceResponse() {}

  explicit UpdateSqlInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateSqlInstanceResponse() = default;
};
class UpdateStoreViewRequest : public Darabonba::Model {
public:
  shared_ptr<string> storeType{};
  shared_ptr<vector<StoreViewStore>> stores{};

  UpdateStoreViewRequest() {}

  explicit UpdateStoreViewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    if (stores) {
      vector<boost::any> temp1;
      for(auto item1:*stores){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stores"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
    if (m.find("stores") != m.end() && !m["stores"].empty()) {
      if (typeid(vector<boost::any>) == m["stores"].type()) {
        vector<StoreViewStore> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stores"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StoreViewStore model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stores = make_shared<vector<StoreViewStore>>(expect1);
      }
    }
  }


  virtual ~UpdateStoreViewRequest() = default;
};
class UpdateStoreViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateStoreViewResponse() {}

  explicit UpdateStoreViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~UpdateStoreViewResponse() = default;
};
class UpsertCollectionPolicyRequestAttribute : public Darabonba::Model {
public:
  shared_ptr<string> app{};
  shared_ptr<string> policyGroup{};

  UpsertCollectionPolicyRequestAttribute() {}

  explicit UpsertCollectionPolicyRequestAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      res["app"] = boost::any(*app);
    }
    if (policyGroup) {
      res["policyGroup"] = boost::any(*policyGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("app") != m.end() && !m["app"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["app"]));
    }
    if (m.find("policyGroup") != m.end() && !m["policyGroup"].empty()) {
      policyGroup = make_shared<string>(boost::any_cast<string>(m["policyGroup"]));
    }
  }


  virtual ~UpsertCollectionPolicyRequestAttribute() = default;
};
class UpsertCollectionPolicyRequestCentralizeConfig : public Darabonba::Model {
public:
  shared_ptr<string> destLogstore{};
  shared_ptr<string> destProject{};
  shared_ptr<string> destRegion{};
  shared_ptr<long> destTTL{};

  UpsertCollectionPolicyRequestCentralizeConfig() {}

  explicit UpsertCollectionPolicyRequestCentralizeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destLogstore) {
      res["destLogstore"] = boost::any(*destLogstore);
    }
    if (destProject) {
      res["destProject"] = boost::any(*destProject);
    }
    if (destRegion) {
      res["destRegion"] = boost::any(*destRegion);
    }
    if (destTTL) {
      res["destTTL"] = boost::any(*destTTL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("destLogstore") != m.end() && !m["destLogstore"].empty()) {
      destLogstore = make_shared<string>(boost::any_cast<string>(m["destLogstore"]));
    }
    if (m.find("destProject") != m.end() && !m["destProject"].empty()) {
      destProject = make_shared<string>(boost::any_cast<string>(m["destProject"]));
    }
    if (m.find("destRegion") != m.end() && !m["destRegion"].empty()) {
      destRegion = make_shared<string>(boost::any_cast<string>(m["destRegion"]));
    }
    if (m.find("destTTL") != m.end() && !m["destTTL"].empty()) {
      destTTL = make_shared<long>(boost::any_cast<long>(m["destTTL"]));
    }
  }


  virtual ~UpsertCollectionPolicyRequestCentralizeConfig() = default;
};
class UpsertCollectionPolicyRequestPolicyConfig : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<vector<string>> regions{};
  shared_ptr<string> resourceMode{};
  shared_ptr<map<string, boost::any>> resourceTags{};

  UpsertCollectionPolicyRequestPolicyConfig() {}

  explicit UpsertCollectionPolicyRequestPolicyConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["instanceIds"] = boost::any(*instanceIds);
    }
    if (regions) {
      res["regions"] = boost::any(*regions);
    }
    if (resourceMode) {
      res["resourceMode"] = boost::any(*resourceMode);
    }
    if (resourceTags) {
      res["resourceTags"] = boost::any(*resourceTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceIds") != m.end() && !m["instanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("regions") != m.end() && !m["regions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["regions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["regions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceMode") != m.end() && !m["resourceMode"].empty()) {
      resourceMode = make_shared<string>(boost::any_cast<string>(m["resourceMode"]));
    }
    if (m.find("resourceTags") != m.end() && !m["resourceTags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["resourceTags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceTags = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpsertCollectionPolicyRequestPolicyConfig() = default;
};
class UpsertCollectionPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<UpsertCollectionPolicyRequestAttribute> attribute{};
  shared_ptr<UpsertCollectionPolicyRequestCentralizeConfig> centralizeConfig{};
  shared_ptr<bool> centralizeEnabled{};
  shared_ptr<string> dataCode{};
  shared_ptr<bool> enabled{};
  shared_ptr<UpsertCollectionPolicyRequestPolicyConfig> policyConfig{};
  shared_ptr<string> policyName{};
  shared_ptr<string> productCode{};

  UpsertCollectionPolicyRequest() {}

  explicit UpsertCollectionPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      res["attribute"] = attribute ? boost::any(attribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (centralizeConfig) {
      res["centralizeConfig"] = centralizeConfig ? boost::any(centralizeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (centralizeEnabled) {
      res["centralizeEnabled"] = boost::any(*centralizeEnabled);
    }
    if (dataCode) {
      res["dataCode"] = boost::any(*dataCode);
    }
    if (enabled) {
      res["enabled"] = boost::any(*enabled);
    }
    if (policyConfig) {
      res["policyConfig"] = policyConfig ? boost::any(policyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyName) {
      res["policyName"] = boost::any(*policyName);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["attribute"].type()) {
        UpsertCollectionPolicyRequestAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["attribute"]));
        attribute = make_shared<UpsertCollectionPolicyRequestAttribute>(model1);
      }
    }
    if (m.find("centralizeConfig") != m.end() && !m["centralizeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["centralizeConfig"].type()) {
        UpsertCollectionPolicyRequestCentralizeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["centralizeConfig"]));
        centralizeConfig = make_shared<UpsertCollectionPolicyRequestCentralizeConfig>(model1);
      }
    }
    if (m.find("centralizeEnabled") != m.end() && !m["centralizeEnabled"].empty()) {
      centralizeEnabled = make_shared<bool>(boost::any_cast<bool>(m["centralizeEnabled"]));
    }
    if (m.find("dataCode") != m.end() && !m["dataCode"].empty()) {
      dataCode = make_shared<string>(boost::any_cast<string>(m["dataCode"]));
    }
    if (m.find("enabled") != m.end() && !m["enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["enabled"]));
    }
    if (m.find("policyConfig") != m.end() && !m["policyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["policyConfig"].type()) {
        UpsertCollectionPolicyRequestPolicyConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["policyConfig"]));
        policyConfig = make_shared<UpsertCollectionPolicyRequestPolicyConfig>(model1);
      }
    }
    if (m.find("policyName") != m.end() && !m["policyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["policyName"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
  }


  virtual ~UpsertCollectionPolicyRequest() = default;
};
class UpsertCollectionPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};

  UpsertCollectionPolicyResponseBody() {}

  explicit UpsertCollectionPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~UpsertCollectionPolicyResponseBody() = default;
};
class UpsertCollectionPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpsertCollectionPolicyResponseBody> body{};

  UpsertCollectionPolicyResponse() {}

  explicit UpsertCollectionPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpsertCollectionPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpsertCollectionPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpsertCollectionPolicyResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  shared_ptr<Alibabacloud_GatewaySPI::Client> _client{};
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  ApplyConfigToMachineGroupResponse applyConfigToMachineGroupWithOptions(shared_ptr<string> project,
                                                                         shared_ptr<string> machineGroup,
                                                                         shared_ptr<string> configName,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyConfigToMachineGroupResponse applyConfigToMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<string> configName);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<string> project,
                                                             shared_ptr<ChangeResourceGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<string> project, shared_ptr<ChangeResourceGroupRequest> request);
  ConsumerGroupHeartBeatResponse consumerGroupHeartBeatWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<string> logstore,
                                                                   shared_ptr<string> consumerGroup,
                                                                   shared_ptr<ConsumerGroupHeartBeatRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConsumerGroupHeartBeatResponse consumerGroupHeartBeat(shared_ptr<string> project,
                                                        shared_ptr<string> logstore,
                                                        shared_ptr<string> consumerGroup,
                                                        shared_ptr<ConsumerGroupHeartBeatRequest> request);
  ConsumerGroupUpdateCheckPointResponse consumerGroupUpdateCheckPointWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<string> logstore,
                                                                                 shared_ptr<string> consumerGroup,
                                                                                 shared_ptr<ConsumerGroupUpdateCheckPointRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConsumerGroupUpdateCheckPointResponse consumerGroupUpdateCheckPoint(shared_ptr<string> project,
                                                                      shared_ptr<string> logstore,
                                                                      shared_ptr<string> consumerGroup,
                                                                      shared_ptr<ConsumerGroupUpdateCheckPointRequest> request);
  CreateAlertResponse createAlertWithOptions(shared_ptr<string> project,
                                             shared_ptr<CreateAlertRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlertResponse createAlert(shared_ptr<string> project, shared_ptr<CreateAlertRequest> request);
  CreateAnnotationDataSetResponse createAnnotationDataSetWithOptions(shared_ptr<CreateAnnotationDataSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAnnotationDataSetResponse createAnnotationDataSet(shared_ptr<CreateAnnotationDataSetRequest> request);
  CreateAnnotationLabelResponse createAnnotationLabelWithOptions(shared_ptr<CreateAnnotationLabelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAnnotationLabelResponse createAnnotationLabel(shared_ptr<CreateAnnotationLabelRequest> request);
  CreateConfigResponse createConfigWithOptions(shared_ptr<string> project,
                                               shared_ptr<CreateConfigRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConfigResponse createConfig(shared_ptr<string> project, shared_ptr<CreateConfigRequest> request);
  CreateConsumerGroupResponse createConsumerGroupWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> logstore,
                                                             shared_ptr<CreateConsumerGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConsumerGroupResponse createConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<CreateConsumerGroupRequest> request);
  CreateDashboardResponse createDashboardWithOptions(shared_ptr<string> project,
                                                     shared_ptr<CreateDashboardRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDashboardResponse createDashboard(shared_ptr<string> project, shared_ptr<CreateDashboardRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<string> project,
                                               shared_ptr<CreateDomainRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<string> project, shared_ptr<CreateDomainRequest> request);
  CreateETLResponse createETLWithOptions(shared_ptr<string> project,
                                         shared_ptr<CreateETLRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateETLResponse createETL(shared_ptr<string> project, shared_ptr<CreateETLRequest> request);
  CreateIndexResponse createIndexWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<CreateIndexRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIndexResponse createIndex(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<CreateIndexRequest> request);
  CreateLogStoreResponse createLogStoreWithOptions(shared_ptr<string> project,
                                                   shared_ptr<CreateLogStoreRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLogStoreResponse createLogStore(shared_ptr<string> project, shared_ptr<CreateLogStoreRequest> request);
  CreateLoggingResponse createLoggingWithOptions(shared_ptr<string> project,
                                                 shared_ptr<CreateLoggingRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoggingResponse createLogging(shared_ptr<string> project, shared_ptr<CreateLoggingRequest> request);
  CreateLogtailPipelineConfigResponse createLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<CreateLogtailPipelineConfigRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLogtailPipelineConfigResponse createLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<CreateLogtailPipelineConfigRequest> request);
  CreateMachineGroupResponse createMachineGroupWithOptions(shared_ptr<string> project,
                                                           shared_ptr<CreateMachineGroupRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMachineGroupResponse createMachineGroup(shared_ptr<string> project, shared_ptr<CreateMachineGroupRequest> request);
  CreateOSSExportResponse createOSSExportWithOptions(shared_ptr<string> project,
                                                     shared_ptr<CreateOSSExportRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOSSExportResponse createOSSExport(shared_ptr<string> project, shared_ptr<CreateOSSExportRequest> request);
  CreateOSSHDFSExportResponse createOSSHDFSExportWithOptions(shared_ptr<string> project,
                                                             shared_ptr<CreateOSSHDFSExportRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOSSHDFSExportResponse createOSSHDFSExport(shared_ptr<string> project, shared_ptr<CreateOSSHDFSExportRequest> request);
  CreateOSSIngestionResponse createOSSIngestionWithOptions(shared_ptr<string> project,
                                                           shared_ptr<CreateOSSIngestionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOSSIngestionResponse createOSSIngestion(shared_ptr<string> project, shared_ptr<CreateOSSIngestionRequest> request);
  CreateOssExternalStoreResponse createOssExternalStoreWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<CreateOssExternalStoreRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOssExternalStoreResponse createOssExternalStore(shared_ptr<string> project, shared_ptr<CreateOssExternalStoreRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateRdsExternalStoreResponse createRdsExternalStoreWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<CreateRdsExternalStoreRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRdsExternalStoreResponse createRdsExternalStore(shared_ptr<string> project, shared_ptr<CreateRdsExternalStoreRequest> request);
  CreateSavedSearchResponse createSavedSearchWithOptions(shared_ptr<string> project,
                                                         shared_ptr<CreateSavedSearchRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSavedSearchResponse createSavedSearch(shared_ptr<string> project, shared_ptr<CreateSavedSearchRequest> request);
  CreateScheduledSQLResponse createScheduledSQLWithOptions(shared_ptr<string> project,
                                                           shared_ptr<CreateScheduledSQLRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScheduledSQLResponse createScheduledSQL(shared_ptr<string> project, shared_ptr<CreateScheduledSQLRequest> request);
  CreateSqlInstanceResponse createSqlInstanceWithOptions(shared_ptr<string> project,
                                                         shared_ptr<CreateSqlInstanceRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSqlInstanceResponse createSqlInstance(shared_ptr<string> project, shared_ptr<CreateSqlInstanceRequest> request);
  CreateStoreViewResponse createStoreViewWithOptions(shared_ptr<string> project,
                                                     shared_ptr<CreateStoreViewRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStoreViewResponse createStoreView(shared_ptr<string> project, shared_ptr<CreateStoreViewRequest> request);
  CreateTicketResponse createTicketWithOptions(shared_ptr<CreateTicketRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTicketResponse createTicket(shared_ptr<CreateTicketRequest> request);
  DeleteAlertResponse deleteAlertWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> alertName,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlertResponse deleteAlert(shared_ptr<string> project, shared_ptr<string> alertName);
  DeleteAnnotationDataResponse deleteAnnotationDataWithOptions(shared_ptr<string> datasetId,
                                                               shared_ptr<string> annotationdataId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAnnotationDataResponse deleteAnnotationData(shared_ptr<string> datasetId, shared_ptr<string> annotationdataId);
  DeleteAnnotationDataSetResponse deleteAnnotationDataSetWithOptions(shared_ptr<string> datasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAnnotationDataSetResponse deleteAnnotationDataSet(shared_ptr<string> datasetId);
  DeleteAnnotationLabelResponse deleteAnnotationLabelWithOptions(shared_ptr<string> labelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAnnotationLabelResponse deleteAnnotationLabel(shared_ptr<string> labelId);
  DeleteCollectionPolicyResponse deleteCollectionPolicyWithOptions(shared_ptr<string> policyName,
                                                                   shared_ptr<DeleteCollectionPolicyRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCollectionPolicyResponse deleteCollectionPolicy(shared_ptr<string> policyName, shared_ptr<DeleteCollectionPolicyRequest> request);
  DeleteConfigResponse deleteConfigWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> configName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConfigResponse deleteConfig(shared_ptr<string> project, shared_ptr<string> configName);
  DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> logstore,
                                                             shared_ptr<string> consumerGroup,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConsumerGroupResponse deleteConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<string> consumerGroup);
  DeleteDashboardResponse deleteDashboardWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> dashboardName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDashboardResponse deleteDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> domainName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<string> project, shared_ptr<string> domainName);
  DeleteETLResponse deleteETLWithOptions(shared_ptr<string> project,
                                         shared_ptr<string> etlName,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteETLResponse deleteETL(shared_ptr<string> project, shared_ptr<string> etlName);
  DeleteExternalStoreResponse deleteExternalStoreWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> externalStoreName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExternalStoreResponse deleteExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName);
  DeleteIndexResponse deleteIndexWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndexResponse deleteIndex(shared_ptr<string> project, shared_ptr<string> logstore);
  DeleteLogStoreResponse deleteLogStoreWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> logstore,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLogStoreResponse deleteLogStore(shared_ptr<string> project, shared_ptr<string> logstore);
  DeleteLoggingResponse deleteLoggingWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoggingResponse deleteLogging(shared_ptr<string> project);
  DeleteLogtailPipelineConfigResponse deleteLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<string> configName,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLogtailPipelineConfigResponse deleteLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<string> configName);
  DeleteMachineGroupResponse deleteMachineGroupWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> machineGroup,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMachineGroupResponse deleteMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup);
  DeleteOSSExportResponse deleteOSSExportWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> ossExportName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOSSExportResponse deleteOSSExport(shared_ptr<string> project, shared_ptr<string> ossExportName);
  DeleteOSSHDFSExportResponse deleteOSSHDFSExportWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> ossExportName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOSSHDFSExportResponse deleteOSSHDFSExport(shared_ptr<string> project, shared_ptr<string> ossExportName);
  DeleteOSSIngestionResponse deleteOSSIngestionWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> ossIngestionName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOSSIngestionResponse deleteOSSIngestion(shared_ptr<string> project, shared_ptr<string> ossIngestionName);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> project);
  DeleteProjectPolicyResponse deleteProjectPolicyWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectPolicyResponse deleteProjectPolicy(shared_ptr<string> project);
  DeleteSavedSearchResponse deleteSavedSearchWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> savedsearchName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSavedSearchResponse deleteSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName);
  DeleteScheduledSQLResponse deleteScheduledSQLWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> scheduledSQLName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScheduledSQLResponse deleteScheduledSQL(shared_ptr<string> project, shared_ptr<string> scheduledSQLName);
  DeleteShipperResponse deleteShipperWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> logstore,
                                                 shared_ptr<string> shipperName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteShipperResponse deleteShipper(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<string> shipperName);
  DeleteStoreViewResponse deleteStoreViewWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> name,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStoreViewResponse deleteStoreView(shared_ptr<string> project, shared_ptr<string> name);
  DisableAlertResponse disableAlertWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> alertName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAlertResponse disableAlert(shared_ptr<string> project, shared_ptr<string> alertName);
  DisableScheduledSQLResponse disableScheduledSQLWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> scheduledSQLName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableScheduledSQLResponse disableScheduledSQL(shared_ptr<string> project, shared_ptr<string> scheduledSQLName);
  EnableAlertResponse enableAlertWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> alertName,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAlertResponse enableAlert(shared_ptr<string> project, shared_ptr<string> alertName);
  EnableScheduledSQLResponse enableScheduledSQLWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> scheduledSQLName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableScheduledSQLResponse enableScheduledSQL(shared_ptr<string> project, shared_ptr<string> scheduledSQLName);
  GetAlertResponse getAlertWithOptions(shared_ptr<string> project,
                                       shared_ptr<string> alertName,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlertResponse getAlert(shared_ptr<string> project, shared_ptr<string> alertName);
  GetAnnotationDataResponse getAnnotationDataWithOptions(shared_ptr<string> datasetId,
                                                         shared_ptr<string> annotationdataId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAnnotationDataResponse getAnnotationData(shared_ptr<string> datasetId, shared_ptr<string> annotationdataId);
  GetAnnotationDataSetResponse getAnnotationDataSetWithOptions(shared_ptr<string> datasetId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAnnotationDataSetResponse getAnnotationDataSet(shared_ptr<string> datasetId);
  GetAnnotationLabelResponse getAnnotationLabelWithOptions(shared_ptr<string> labelId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAnnotationLabelResponse getAnnotationLabel(shared_ptr<string> labelId);
  GetAppliedConfigsResponse getAppliedConfigsWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> machineGroup,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppliedConfigsResponse getAppliedConfigs(shared_ptr<string> project, shared_ptr<string> machineGroup);
  GetAppliedMachineGroupsResponse getAppliedMachineGroupsWithOptions(shared_ptr<string> project,
                                                                     shared_ptr<string> configName,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppliedMachineGroupsResponse getAppliedMachineGroups(shared_ptr<string> project, shared_ptr<string> configName);
  GetCheckPointResponse getCheckPointWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> logstore,
                                                 shared_ptr<string> consumerGroup,
                                                 shared_ptr<GetCheckPointRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCheckPointResponse getCheckPoint(shared_ptr<string> project,
                                      shared_ptr<string> logstore,
                                      shared_ptr<string> consumerGroup,
                                      shared_ptr<GetCheckPointRequest> request);
  GetCollectionPolicyResponse getCollectionPolicyWithOptions(shared_ptr<string> policyName,
                                                             shared_ptr<GetCollectionPolicyRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCollectionPolicyResponse getCollectionPolicy(shared_ptr<string> policyName, shared_ptr<GetCollectionPolicyRequest> request);
  GetConfigResponse getConfigWithOptions(shared_ptr<string> project,
                                         shared_ptr<string> configName,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConfigResponse getConfig(shared_ptr<string> project, shared_ptr<string> configName);
  GetContextLogsResponse getContextLogsWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> logstore,
                                                   shared_ptr<GetContextLogsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetContextLogsResponse getContextLogs(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetContextLogsRequest> request);
  GetCursorResponse getCursorWithOptions(shared_ptr<string> project,
                                         shared_ptr<string> logstore,
                                         shared_ptr<string> shardId,
                                         shared_ptr<GetCursorRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCursorResponse getCursor(shared_ptr<string> project,
                              shared_ptr<string> logstore,
                              shared_ptr<string> shardId,
                              shared_ptr<GetCursorRequest> request);
  GetCursorTimeResponse getCursorTimeWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> logstore,
                                                 shared_ptr<string> shardId,
                                                 shared_ptr<GetCursorTimeRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCursorTimeResponse getCursorTime(shared_ptr<string> project,
                                      shared_ptr<string> logstore,
                                      shared_ptr<string> shardId,
                                      shared_ptr<GetCursorTimeRequest> request);
  GetDashboardResponse getDashboardWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> dashboardName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDashboardResponse getDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName);
  GetETLResponse getETLWithOptions(shared_ptr<string> project,
                                   shared_ptr<string> etlName,
                                   shared_ptr<map<string, string>> headers,
                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetETLResponse getETL(shared_ptr<string> project, shared_ptr<string> etlName);
  GetExternalStoreResponse getExternalStoreWithOptions(shared_ptr<string> project,
                                                       shared_ptr<string> externalStoreName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExternalStoreResponse getExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName);
  GetHistogramsResponse getHistogramsWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> logstore,
                                                 shared_ptr<GetHistogramsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistogramsResponse getHistograms(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetHistogramsRequest> request);
  GetIndexResponse getIndexWithOptions(shared_ptr<string> project,
                                       shared_ptr<string> logstore,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIndexResponse getIndex(shared_ptr<string> project, shared_ptr<string> logstore);
  GetLogStoreResponse getLogStoreWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogStoreResponse getLogStore(shared_ptr<string> project, shared_ptr<string> logstore);
  GetLogStoreMeteringModeResponse getLogStoreMeteringModeWithOptions(shared_ptr<string> project,
                                                                     shared_ptr<string> logstore,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogStoreMeteringModeResponse getLogStoreMeteringMode(shared_ptr<string> project, shared_ptr<string> logstore);
  GetLoggingResponse getLoggingWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoggingResponse getLogging(shared_ptr<string> project);
  GetLogsResponse getLogsWithOptions(shared_ptr<string> project,
                                     shared_ptr<string> logstore,
                                     shared_ptr<GetLogsRequest> request,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogsResponse getLogs(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetLogsRequest> request);
  GetLogsV2Response getLogsV2WithOptions(shared_ptr<string> project,
                                         shared_ptr<string> logstore,
                                         shared_ptr<GetLogsV2Request> request,
                                         shared_ptr<GetLogsV2Headers> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogsV2Response getLogsV2(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetLogsV2Request> request);
  GetLogtailPipelineConfigResponse getLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                       shared_ptr<string> configName,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogtailPipelineConfigResponse getLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<string> configName);
  GetMLServiceResultsResponse getMLServiceResultsWithOptions(shared_ptr<string> serviceName,
                                                             shared_ptr<GetMLServiceResultsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMLServiceResultsResponse getMLServiceResults(shared_ptr<string> serviceName, shared_ptr<GetMLServiceResultsRequest> request);
  GetMachineGroupResponse getMachineGroupWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> machineGroup,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMachineGroupResponse getMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup);
  GetMetricStoreMeteringModeResponse getMetricStoreMeteringModeWithOptions(shared_ptr<string> project,
                                                                           shared_ptr<string> metricStore,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMetricStoreMeteringModeResponse getMetricStoreMeteringMode(shared_ptr<string> project, shared_ptr<string> metricStore);
  GetOSSExportResponse getOSSExportWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> ossExportName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOSSExportResponse getOSSExport(shared_ptr<string> project, shared_ptr<string> ossExportName);
  GetOSSHDFSExportResponse getOSSHDFSExportWithOptions(shared_ptr<string> project,
                                                       shared_ptr<string> ossExportName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOSSHDFSExportResponse getOSSHDFSExport(shared_ptr<string> project, shared_ptr<string> ossExportName);
  GetOSSIngestionResponse getOSSIngestionWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> ossIngestionName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOSSIngestionResponse getOSSIngestion(shared_ptr<string> project, shared_ptr<string> ossIngestionName);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> project);
  GetProjectLogsResponse getProjectLogsWithOptions(shared_ptr<string> project,
                                                   shared_ptr<GetProjectLogsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectLogsResponse getProjectLogs(shared_ptr<string> project, shared_ptr<GetProjectLogsRequest> request);
  GetProjectPolicyResponse getProjectPolicyWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectPolicyResponse getProjectPolicy(shared_ptr<string> project);
  GetSavedSearchResponse getSavedSearchWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> savedsearchName,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSavedSearchResponse getSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName);
  GetScheduledSQLResponse getScheduledSQLWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> scheduledSQLName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetScheduledSQLResponse getScheduledSQL(shared_ptr<string> project, shared_ptr<string> scheduledSQLName);
  GetShipperStatusResponse getShipperStatusWithOptions(shared_ptr<string> project,
                                                       shared_ptr<string> logstore,
                                                       shared_ptr<string> shipperName,
                                                       shared_ptr<GetShipperStatusRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetShipperStatusResponse getShipperStatus(shared_ptr<string> project,
                                            shared_ptr<string> logstore,
                                            shared_ptr<string> shipperName,
                                            shared_ptr<GetShipperStatusRequest> request);
  GetSlsServiceResponse getSlsServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSlsServiceResponse getSlsService();
  GetSqlInstanceResponse getSqlInstanceWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSqlInstanceResponse getSqlInstance(shared_ptr<string> project);
  GetStoreViewResponse getStoreViewWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> name,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStoreViewResponse getStoreView(shared_ptr<string> project, shared_ptr<string> name);
  GetStoreViewIndexResponse getStoreViewIndexWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> name,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStoreViewIndexResponse getStoreViewIndex(shared_ptr<string> project, shared_ptr<string> name);
  ListAlertsResponse listAlertsWithOptions(shared_ptr<string> project,
                                           shared_ptr<ListAlertsRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlertsResponse listAlerts(shared_ptr<string> project, shared_ptr<ListAlertsRequest> request);
  ListAnnotationDataResponse listAnnotationDataWithOptions(shared_ptr<string> datasetId,
                                                           shared_ptr<ListAnnotationDataRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnnotationDataResponse listAnnotationData(shared_ptr<string> datasetId, shared_ptr<ListAnnotationDataRequest> request);
  ListAnnotationDataSetsResponse listAnnotationDataSetsWithOptions(shared_ptr<ListAnnotationDataSetsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnnotationDataSetsResponse listAnnotationDataSets(shared_ptr<ListAnnotationDataSetsRequest> request);
  ListAnnotationLabelsResponse listAnnotationLabelsWithOptions(shared_ptr<ListAnnotationLabelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnnotationLabelsResponse listAnnotationLabels(shared_ptr<ListAnnotationLabelsRequest> request);
  ListCollectionPoliciesResponse listCollectionPoliciesWithOptions(shared_ptr<ListCollectionPoliciesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCollectionPoliciesResponse listCollectionPolicies(shared_ptr<ListCollectionPoliciesRequest> request);
  ListConfigResponse listConfigWithOptions(shared_ptr<string> project,
                                           shared_ptr<ListConfigRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConfigResponse listConfig(shared_ptr<string> project, shared_ptr<ListConfigRequest> request);
  ListConsumerGroupResponse listConsumerGroupWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> logstore,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConsumerGroupResponse listConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore);
  ListDashboardResponse listDashboardWithOptions(shared_ptr<string> project,
                                                 shared_ptr<ListDashboardRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDashboardResponse listDashboard(shared_ptr<string> project, shared_ptr<ListDashboardRequest> request);
  ListDomainsResponse listDomainsWithOptions(shared_ptr<string> project,
                                             shared_ptr<ListDomainsRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainsResponse listDomains(shared_ptr<string> project, shared_ptr<ListDomainsRequest> request);
  ListETLsResponse listETLsWithOptions(shared_ptr<string> project,
                                       shared_ptr<ListETLsRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListETLsResponse listETLs(shared_ptr<string> project, shared_ptr<ListETLsRequest> request);
  ListExternalStoreResponse listExternalStoreWithOptions(shared_ptr<string> project,
                                                         shared_ptr<ListExternalStoreRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExternalStoreResponse listExternalStore(shared_ptr<string> project, shared_ptr<ListExternalStoreRequest> request);
  ListLogStoresResponse listLogStoresWithOptions(shared_ptr<string> project,
                                                 shared_ptr<ListLogStoresRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogStoresResponse listLogStores(shared_ptr<string> project, shared_ptr<ListLogStoresRequest> request);
  ListLogtailPipelineConfigResponse listLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                         shared_ptr<ListLogtailPipelineConfigRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogtailPipelineConfigResponse listLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<ListLogtailPipelineConfigRequest> request);
  ListMachineGroupResponse listMachineGroupWithOptions(shared_ptr<string> project,
                                                       shared_ptr<ListMachineGroupRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMachineGroupResponse listMachineGroup(shared_ptr<string> project, shared_ptr<ListMachineGroupRequest> request);
  ListMachinesResponse listMachinesWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> machineGroup,
                                               shared_ptr<ListMachinesRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMachinesResponse listMachines(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<ListMachinesRequest> request);
  ListOSSExportsResponse listOSSExportsWithOptions(shared_ptr<string> project,
                                                   shared_ptr<ListOSSExportsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOSSExportsResponse listOSSExports(shared_ptr<string> project, shared_ptr<ListOSSExportsRequest> request);
  ListOSSHDFSExportsResponse listOSSHDFSExportsWithOptions(shared_ptr<string> project,
                                                           shared_ptr<ListOSSHDFSExportsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOSSHDFSExportsResponse listOSSHDFSExports(shared_ptr<string> project, shared_ptr<ListOSSHDFSExportsRequest> request);
  ListOSSIngestionsResponse listOSSIngestionsWithOptions(shared_ptr<string> project,
                                                         shared_ptr<ListOSSIngestionsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOSSIngestionsResponse listOSSIngestions(shared_ptr<string> project, shared_ptr<ListOSSIngestionsRequest> request);
  ListProjectResponse listProjectWithOptions(shared_ptr<ListProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectResponse listProject(shared_ptr<ListProjectRequest> request);
  ListSavedSearchResponse listSavedSearchWithOptions(shared_ptr<string> project,
                                                     shared_ptr<ListSavedSearchRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSavedSearchResponse listSavedSearch(shared_ptr<string> project, shared_ptr<ListSavedSearchRequest> request);
  ListScheduledSQLsResponse listScheduledSQLsWithOptions(shared_ptr<string> project,
                                                         shared_ptr<ListScheduledSQLsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListScheduledSQLsResponse listScheduledSQLs(shared_ptr<string> project, shared_ptr<ListScheduledSQLsRequest> request);
  ListShardsResponse listShardsWithOptions(shared_ptr<string> project,
                                           shared_ptr<string> logstore,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListShardsResponse listShards(shared_ptr<string> project, shared_ptr<string> logstore);
  ListShipperResponse listShipperWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListShipperResponse listShipper(shared_ptr<string> project, shared_ptr<string> logstore);
  ListStoreViewsResponse listStoreViewsWithOptions(shared_ptr<string> project,
                                                   shared_ptr<ListStoreViewsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListStoreViewsResponse listStoreViews(shared_ptr<string> project, shared_ptr<ListStoreViewsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  MergeShardResponse mergeShardWithOptions(shared_ptr<string> project,
                                           shared_ptr<string> logstore,
                                           shared_ptr<string> shard,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeShardResponse mergeShard(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<string> shard);
  OpenSlsServiceResponse openSlsServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenSlsServiceResponse openSlsService();
  PutAnnotationDataResponse putAnnotationDataWithOptions(shared_ptr<string> datasetId,
                                                         shared_ptr<PutAnnotationDataRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutAnnotationDataResponse putAnnotationData(shared_ptr<string> datasetId, shared_ptr<PutAnnotationDataRequest> request);
  PutProjectPolicyResponse putProjectPolicyWithOptions(shared_ptr<string> project,
                                                       shared_ptr<PutProjectPolicyRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutProjectPolicyResponse putProjectPolicy(shared_ptr<string> project, shared_ptr<PutProjectPolicyRequest> request);
  PutProjectTransferAccelerationResponse putProjectTransferAccelerationWithOptions(shared_ptr<string> project,
                                                                                   shared_ptr<PutProjectTransferAccelerationRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutProjectTransferAccelerationResponse putProjectTransferAcceleration(shared_ptr<string> project, shared_ptr<PutProjectTransferAccelerationRequest> request);
  PutWebtrackingResponse putWebtrackingWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> logstoreName,
                                                   shared_ptr<PutWebtrackingRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutWebtrackingResponse putWebtracking(shared_ptr<string> project, shared_ptr<string> logstoreName, shared_ptr<PutWebtrackingRequest> request);
  QueryMLServiceResultsResponse queryMLServiceResultsWithOptions(shared_ptr<string> serviceName,
                                                                 shared_ptr<QueryMLServiceResultsRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMLServiceResultsResponse queryMLServiceResults(shared_ptr<string> serviceName, shared_ptr<QueryMLServiceResultsRequest> request);
  RefreshTokenResponse refreshTokenWithOptions(shared_ptr<RefreshTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshTokenResponse refreshToken(shared_ptr<RefreshTokenRequest> request);
  RemoveConfigFromMachineGroupResponse removeConfigFromMachineGroupWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<string> machineGroup,
                                                                               shared_ptr<string> configName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveConfigFromMachineGroupResponse removeConfigFromMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<string> configName);
  SplitShardResponse splitShardWithOptions(shared_ptr<string> project,
                                           shared_ptr<string> logstore,
                                           shared_ptr<string> shard,
                                           shared_ptr<SplitShardRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SplitShardResponse splitShard(shared_ptr<string> project,
                                shared_ptr<string> logstore,
                                shared_ptr<string> shard,
                                shared_ptr<SplitShardRequest> request);
  StartETLResponse startETLWithOptions(shared_ptr<string> project,
                                       shared_ptr<string> etlName,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartETLResponse startETL(shared_ptr<string> project, shared_ptr<string> etlName);
  StartOSSExportResponse startOSSExportWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> ossExportName,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartOSSExportResponse startOSSExport(shared_ptr<string> project, shared_ptr<string> ossExportName);
  StartOSSHDFSExportResponse startOSSHDFSExportWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> ossExportName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartOSSHDFSExportResponse startOSSHDFSExport(shared_ptr<string> project, shared_ptr<string> ossExportName);
  StartOSSIngestionResponse startOSSIngestionWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> ossIngestionName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartOSSIngestionResponse startOSSIngestion(shared_ptr<string> project, shared_ptr<string> ossIngestionName);
  StopETLResponse stopETLWithOptions(shared_ptr<string> project,
                                     shared_ptr<string> etlName,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopETLResponse stopETL(shared_ptr<string> project, shared_ptr<string> etlName);
  StopOSSExportResponse stopOSSExportWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> ossExportName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopOSSExportResponse stopOSSExport(shared_ptr<string> project, shared_ptr<string> ossExportName);
  StopOSSHDFSExportResponse stopOSSHDFSExportWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> ossExportName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopOSSHDFSExportResponse stopOSSHDFSExport(shared_ptr<string> project, shared_ptr<string> ossExportName);
  StopOSSIngestionResponse stopOSSIngestionWithOptions(shared_ptr<string> project,
                                                       shared_ptr<string> ossIngestionName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopOSSIngestionResponse stopOSSIngestion(shared_ptr<string> project, shared_ptr<string> ossIngestionName);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAlertResponse updateAlertWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> alertName,
                                             shared_ptr<UpdateAlertRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAlertResponse updateAlert(shared_ptr<string> project, shared_ptr<string> alertName, shared_ptr<UpdateAlertRequest> request);
  UpdateAnnotationDataSetResponse updateAnnotationDataSetWithOptions(shared_ptr<string> datasetId,
                                                                     shared_ptr<UpdateAnnotationDataSetRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAnnotationDataSetResponse updateAnnotationDataSet(shared_ptr<string> datasetId, shared_ptr<UpdateAnnotationDataSetRequest> request);
  UpdateAnnotationLabelResponse updateAnnotationLabelWithOptions(shared_ptr<UpdateAnnotationLabelRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAnnotationLabelResponse updateAnnotationLabel(shared_ptr<UpdateAnnotationLabelRequest> request);
  UpdateConfigResponse updateConfigWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> configName,
                                               shared_ptr<UpdateConfigRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigResponse updateConfig(shared_ptr<string> project, shared_ptr<string> configName, shared_ptr<UpdateConfigRequest> request);
  UpdateConsumerGroupResponse updateConsumerGroupWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> logstore,
                                                             shared_ptr<string> consumerGroup,
                                                             shared_ptr<UpdateConsumerGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConsumerGroupResponse updateConsumerGroup(shared_ptr<string> project,
                                                  shared_ptr<string> logstore,
                                                  shared_ptr<string> consumerGroup,
                                                  shared_ptr<UpdateConsumerGroupRequest> request);
  UpdateDashboardResponse updateDashboardWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> dashboardName,
                                                     shared_ptr<UpdateDashboardRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDashboardResponse updateDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName, shared_ptr<UpdateDashboardRequest> request);
  UpdateETLResponse updateETLWithOptions(shared_ptr<string> project,
                                         shared_ptr<string> etlName,
                                         shared_ptr<UpdateETLRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateETLResponse updateETL(shared_ptr<string> project, shared_ptr<string> etlName, shared_ptr<UpdateETLRequest> request);
  UpdateIndexResponse updateIndexWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<UpdateIndexRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIndexResponse updateIndex(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<UpdateIndexRequest> request);
  UpdateLogStoreResponse updateLogStoreWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> logstore,
                                                   shared_ptr<UpdateLogStoreRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLogStoreResponse updateLogStore(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<UpdateLogStoreRequest> request);
  UpdateLogStoreMeteringModeResponse updateLogStoreMeteringModeWithOptions(shared_ptr<string> project,
                                                                           shared_ptr<string> logstore,
                                                                           shared_ptr<UpdateLogStoreMeteringModeRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLogStoreMeteringModeResponse updateLogStoreMeteringMode(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<UpdateLogStoreMeteringModeRequest> request);
  UpdateLoggingResponse updateLoggingWithOptions(shared_ptr<string> project,
                                                 shared_ptr<UpdateLoggingRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoggingResponse updateLogging(shared_ptr<string> project, shared_ptr<UpdateLoggingRequest> request);
  UpdateLogtailPipelineConfigResponse updateLogtailPipelineConfigWithOptions(shared_ptr<string> project,
                                                                             shared_ptr<string> configName,
                                                                             shared_ptr<UpdateLogtailPipelineConfigRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLogtailPipelineConfigResponse updateLogtailPipelineConfig(shared_ptr<string> project, shared_ptr<string> configName, shared_ptr<UpdateLogtailPipelineConfigRequest> request);
  UpdateMachineGroupResponse updateMachineGroupWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> groupName,
                                                           shared_ptr<UpdateMachineGroupRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMachineGroupResponse updateMachineGroup(shared_ptr<string> project, shared_ptr<string> groupName, shared_ptr<UpdateMachineGroupRequest> request);
  UpdateMachineGroupMachineResponse updateMachineGroupMachineWithOptions(shared_ptr<string> project,
                                                                         shared_ptr<string> machineGroup,
                                                                         shared_ptr<UpdateMachineGroupMachineRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMachineGroupMachineResponse updateMachineGroupMachine(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<UpdateMachineGroupMachineRequest> request);
  UpdateMetricStoreMeteringModeResponse updateMetricStoreMeteringModeWithOptions(shared_ptr<string> project,
                                                                                 shared_ptr<string> metricStore,
                                                                                 shared_ptr<UpdateMetricStoreMeteringModeRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMetricStoreMeteringModeResponse updateMetricStoreMeteringMode(shared_ptr<string> project, shared_ptr<string> metricStore, shared_ptr<UpdateMetricStoreMeteringModeRequest> request);
  UpdateOSSExportResponse updateOSSExportWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> ossExportName,
                                                     shared_ptr<UpdateOSSExportRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOSSExportResponse updateOSSExport(shared_ptr<string> project, shared_ptr<string> ossExportName, shared_ptr<UpdateOSSExportRequest> request);
  UpdateOSSHDFSExportResponse updateOSSHDFSExportWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> ossExportName,
                                                             shared_ptr<UpdateOSSHDFSExportRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOSSHDFSExportResponse updateOSSHDFSExport(shared_ptr<string> project, shared_ptr<string> ossExportName, shared_ptr<UpdateOSSHDFSExportRequest> request);
  UpdateOSSIngestionResponse updateOSSIngestionWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> ossIngestionName,
                                                           shared_ptr<UpdateOSSIngestionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOSSIngestionResponse updateOSSIngestion(shared_ptr<string> project, shared_ptr<string> ossIngestionName, shared_ptr<UpdateOSSIngestionRequest> request);
  UpdateOssExternalStoreResponse updateOssExternalStoreWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<string> externalStoreName,
                                                                   shared_ptr<UpdateOssExternalStoreRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOssExternalStoreResponse updateOssExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName, shared_ptr<UpdateOssExternalStoreRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<string> project,
                                                 shared_ptr<UpdateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<string> project, shared_ptr<UpdateProjectRequest> request);
  UpdateRdsExternalStoreResponse updateRdsExternalStoreWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<string> externalStoreName,
                                                                   shared_ptr<UpdateRdsExternalStoreRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRdsExternalStoreResponse updateRdsExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName, shared_ptr<UpdateRdsExternalStoreRequest> request);
  UpdateSavedSearchResponse updateSavedSearchWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> savedsearchName,
                                                         shared_ptr<UpdateSavedSearchRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSavedSearchResponse updateSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName, shared_ptr<UpdateSavedSearchRequest> request);
  UpdateScheduledSQLResponse updateScheduledSQLWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> scheduledSQLName,
                                                           shared_ptr<UpdateScheduledSQLRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateScheduledSQLResponse updateScheduledSQL(shared_ptr<string> project, shared_ptr<string> scheduledSQLName, shared_ptr<UpdateScheduledSQLRequest> request);
  UpdateSqlInstanceResponse updateSqlInstanceWithOptions(shared_ptr<string> project,
                                                         shared_ptr<UpdateSqlInstanceRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSqlInstanceResponse updateSqlInstance(shared_ptr<string> project, shared_ptr<UpdateSqlInstanceRequest> request);
  UpdateStoreViewResponse updateStoreViewWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> name,
                                                     shared_ptr<UpdateStoreViewRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStoreViewResponse updateStoreView(shared_ptr<string> project, shared_ptr<string> name, shared_ptr<UpdateStoreViewRequest> request);
  UpsertCollectionPolicyResponse upsertCollectionPolicyWithOptions(shared_ptr<UpsertCollectionPolicyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpsertCollectionPolicyResponse upsertCollectionPolicy(shared_ptr<UpsertCollectionPolicyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sls20201230

#endif
