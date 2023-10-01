const jsonData = [
    {
      "name": "ads",
      "subCat": ["adwords", "facebook", "google_ads"]
    },
    {
      "name": "amazon",
      "subCat": ["amazon_internet"]
    },
    {
      "name": "bank_charges",
      "subCat": ["consolidated_charges", "commission_charges", "imps_charges"]
    },
    {
      "name": "ca",
      "subCat": ["jyothi_prakash_and_co"]
    },
    {
      "name": "credit_card",
      "subCat": ["e-commerce"]
    },
    {
      "name": "e-commerce",
      "subCat": ["amazon_in", "amazon_pay"]
    },
    {
      "name": "food",
      "subCat": ["swiggy", "zomato", "jubilant_foodworks", "paradise_food"]
    },
    {
      "name": "google_play",
      "subCat": ["google_payment"]
    },
    {
      "name": "internal_bank_transfer",
      "subCat": ["zobaze_axis"]
    },
    {
      "name": "paypal",
      "subCat": ["paypal"]
    },
    {
      "name": "payroll",
      "subCat": ["vinay_jawalkar", "kalpana", "soumith_ganji", "jhansi_lakshmi_somarouthu", "appala_naidu_gadu", "tejaswi_tata", "vivek_t", "walkover_web", "parag_agarwal", "karthik_sutrave", "fiverr", "sai_teja", "prati_bissa", "omkar_rameshwar_tenkale", "prakash_reddy", "nidhi_motghare", "jeevan_deskmukh",
      "omkar_bd", "salam_bin_mohammed", "megh_goswami", "abhishresth_goswami", "harikanth_reddy_bomidika", "roshni", "abhinav_naragani"]
    },
    {
      "name": "phone_operator",
      "subCat": ["airtel"]
    },
    {
      "name": "razorpay",
      "subCat": ["razorpay"]
    },
    {
      "name": "rent",
      "subCat": ["speckle", "t-hub", "cokarma_hub"]
    },
    {
      "name": "servers",
      "subCat": ["google_cloud", "mongodb", "aws"]
    },
    {
      "name": "software_subscription",
      "subCat": ["google_workspace", "wati", "rebtel", "fluid_software", "godaddy", "grammarly", "chatgpt", "linkedin", "envato", "wabi_virtual_number", "apptweak", "phrase", "canva", "sashido", "helpcrunch", "retool", "cutshort", "wix", "whimsical"]
    },
    {
      "name": "stripe",
      "subCat": ["stripe", "india"]
    },
    {
      "name": "tax",
      "subCat": ["gst", "cbdt"]
    },
    {
      "name": "sales_to_bank",
      "subCat": ["zobaze", "shopman"]
    }
  
  ];
function addIdToData(data) {
    let idCounter = 1;

    data.forEach(entry => {
        entry.id = idCounter;
        idCounter++;
    });

    return data;
}

// Call the function to add the "id" field to the JSON data
const jsonDataWithId = addIdToData(jsonData);

// Display the updated JSON data with the "id" field
console.log(jsonDataWithId);